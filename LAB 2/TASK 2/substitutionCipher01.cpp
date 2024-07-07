#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    map < char , int > cipherTextFrequency;
    int numberOfReplacableCharecters = 0;

    string ciphertext = "af p xpkcaqvnpk pfg, af ipqe qpri, gauuikifc tpw, ceiri udvk tiki afgarxifrphni cd eaowvmd popkwn, hiqpvri du ear jvaql vfgikrcpfgafm du cei xkafqaxnir du xrwqedearcdkw pfg du ear aopmafpcasi xkdhafmr afcd fit pkipr. ac tpr qdoudkcafm cd lfdt cepc au pfwceafm epxxifig cd ringdf eaorinu hiudki cei opceiopcaqr du cei uaing qdvng hi qdoxnicinw tdklig dvc pfg edt rndtnw ac xkdqiigig, pfg edt odvfcpafdvr cei dhrcpqnir--ceiki tdvng pc niprc kiopafdfi mddg oafg cepc tdvng qdfcafvi cei kiripkqe";

    for(auto ch: ciphertext){
        if('a' <= ch && 'z' >= ch) cipherTextFrequency[ch]++; numberOfReplacableCharecters++;
    }

    vector < pair < double , char > > cipherFreqList;
    string englishLanguageFreqOrder = "etaonhisrdluwmgcfybpkvjxzq";
    string key = "abcdefghijklmnopqrstuvwxyz";
    string ciphertextFrequencyOrder = "";

    for(auto freqData: cipherTextFrequency) {
        cipherFreqList.push_back({(freqData.second * 100.00) / numberOfReplacableCharecters, freqData.first});
    }

    sort(cipherFreqList.begin(), cipherFreqList.end());

    cout << "CIPHERTEXT FREQUENCY ORDER : " << endl;
    for(auto freq: cipherFreqList){
        cout << freq.second << " >> " << freq.first << "% " << endl;
        ciphertextFrequencyOrder += freq.second;
    }

    reverse(ciphertextFrequencyOrder.begin(), ciphertextFrequencyOrder.end());

    cout << endl << "ciphertextFrequencyOrder : " << ciphertextFrequencyOrder << endl;
    cout << "englishLanguageFrequencyOrder : " << englishLanguageFreqOrder << endl << endl;

    int indx = 0;
    for(auto ch: ciphertextFrequencyOrder){
        cout << key[(int)englishLanguageFreqOrder[indx] - (int)'a'] << " will be replaced as " << ch << endl;
        key[(int)englishLanguageFreqOrder[indx] - (int)'a'] = ch;
        indx++;
    }

    cout << endl << " >>> KEY FOUND : " << key << endl << endl;

    string decrypted = ciphertext;

    int i = 0;
    for(auto lol: ciphertext) {
        if('a' <= ciphertext[i] && 'z' >= ciphertext[i]) decrypted[i] = key[(int)lol - (int)'a'];
        i++;
    }

    cout << " >>> AFTER DECRYPTION : " << endl;
    cout << decrypted << endl;

    return 0;
}
