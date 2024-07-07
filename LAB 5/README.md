### Checkpoint 1: Access https://localhost:4433 and describe observations

**Steps Followed:**

1. **Created Apache Server:**
   - Installed and configured Apache web server on my machine.
   
2. **Default Hosting on Localhost:**
   - Initially, the server was accessible via `http://localhost` (127.0.0.1) using the default HTTP protocol.
   
3. **Unsecured HTTP Protocol:**
   - The website was served over HTTP, which is not secure.

4. **Content Addition for Example.com:**
   - Added the `example.com` content in the `/var/www/example.com/html/index.html` directory.
   
5. **Hosting Index Page:**
   - Created an `index.html` file in the aforementioned directory to serve as the home page for `example.com`.
   
6. **Virtual Configuration for HTTP:**
   - Configured Apache to serve the site at `http://example.com` on port 80, which still used the insecure HTTP protocol.

**Observations:**
- The website was accessible at `http://example.com`, but it did not use HTTPS, meaning data transmitted between the client and server was not encrypted, posing a security risk.

### Checkpoint 2: Repeat the setup for webserverlab.com and show the results

**Steps Followed:**

1. **Setup for Webserverlab.com:**
   - Repeated the setup process as done for `example.com`.
   
2. **Serving Content:**
   - Served the site content from `/var/www/html/index.html` for `webserverlab.com`.
   
3. **SSL Configuration:**
   - Configured the `default-ssl.conf` file and included the `webserverlab.com` configuration for local hosting.
   
4. **Hosting on HTTP:**
   - Both `webserverlab.com` and `example.com` were hosted using the HTTP protocol, making them accessible but insecure.

**Observations:**
- Both sites were accessible over HTTP, confirming the setup was correct. However, the lack of HTTPS indicated that the sites were not secure.

### Checkpoint 3: Demonstrate accessing https://example.com via HTTPS

**Steps Followed:**

1. **Becoming a Certificate Authority (CA):**
   - Copied `openssl.cnf` to `demoCA` and generated an RSA key pair.
   - Followed the instructions to create a digital certificate.

2. **HTTPS Configuration for Example.com:**
   - Configured port 443 (HTTPS) for `example.com`.
   - Added necessary configuration blocks in Apache to serve content from `/var/www/example.com/html/index.html`.

3. **SSL Certificate Setup:**
   - Configured `SSLCertificateFile` and `SSLCertificateKeyFile` with the previously generated certificate and key.

4. **Browser Configuration:**
   - Added an exception in Mozilla Firefox to trust the local CA, enabling access to `https://example.com`.
   - Used external resources to troubleshoot and resolve any certificate issues.

**Observations:**
- Successfully accessed `https://example.com` over HTTPS. The site now uses encryption to secure data transmission, ensuring secure communication.

### Checkpoint 4: Set up and access https://webserverlab.com via HTTPS

**Steps Followed:**

1. **Repeating HTTPS Setup for Webserverlab.com:**
   - Followed the same steps as for `example.com` to configure HTTPS for `webserverlab.com`.

2. **SSL Certificate and Key Configuration:**
   - Configured Apache with the SSL certificate and key for `webserverlab.com`.

3. **Accessing the Secure Site:**
   - Ensured that `https://webserverlab.com` was accessible via HTTPS, indicating that the configuration was successful.

**Observations:**
- Successfully accessed `https://webserverlab.com` over HTTPS, confirming that both sites are now securely served.
