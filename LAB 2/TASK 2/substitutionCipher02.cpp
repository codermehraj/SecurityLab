#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    map < char , int > cipherTextFrequency;
    int numberOfReplacableCharecters = 0;

    string ciphertext = "aceah toz puvg vcdl omj puvg yudqecov, omj loj auum klu thmjuv hs klu zlcvu shv zcbkg guovz, upuv zcmdu lcz vuwovroaeu jczoyyuovomdu omj qmubyudkuj vukqvm. klu vcdluz lu loj avhqnlk aodr svhw lcz kvopuez loj mht audhwu o ehdoe eunumj, omj ck toz yhyqeoveg auecupuj, tlokupuv klu hej sher wcnlk zog, klok klu lcee ok aon umj toz sqee hs kqmmuez zkqssuj tckl kvuozqvu. omj cs klok toz mhk umhqnl shv sowu, kluvu toz oezh lcz yvhehmnuj pcnhqv kh wovpue ok. kcwu thvu hm, aqk ck zuuwuj kh lopu eckkeu ussudk hm wv. aonncmz. ok mcmukg lu toz wqdl klu zowu oz ok scskg. ok mcmukg-mcmu klug aunom kh doee lcw tuee-yvuzuvpuj; aqk qmdlomnuj thqej lopu auum muovuv klu wovr. kluvu tuvu zhwu klok zlhhr klucv luojz omj klhqnlk klcz toz khh wqdl hs o nhhj klcmn; ck zuuwuj qmsocv klokomghmu zlhqej yhzzuzz (oyyovumkeg) yuvyukqoe ghqkl oz tuee oz (vuyqkujeg) cmubloqzkcaeu tuoekl. ck tcee lopu kh au yocj shv, klug zocj. ck czm'k mokqvoe, omj kvhqaeu tcee dhwu hs ck! aqk zh sov kvhqaeu loj mhk dhwu; omj oz wv. aonncmz toz numuvhqz tckl lcz whmug, whzk yuhyeu tuvu tceecmn kh shvncpu lcw lcz hjjckcuz omj lcz nhhj shvkqmu. lu vuwocmuj hm pczckcmn kuvwz tckl lcz vueokcpuz (ubduyk, hs dhqvzu, klu zodrpceeu- aonncmzuz), omj lu loj womg juphkuj ojwcvuvz owhmn klu lhaackz hs yhhv omj qmcwyhvkomk sowcecuz. aqk lu loj mh dehzu svcumjz, qmkce zhwu hs lcz ghqmnuv dhqzcmz aunom kh nvht qy. klu uejuzk hs kluzu, omj aceah'z sophqvcku, toz ghqmn svhjh aonncmz. tlum aceah toz mcmukg-mcmu lu ojhykuj svhjh oz lcz lucv, omj avhqnlk lcw kh ecpu ok aon umj; omj klu lhyuz hs klu zodrpceeu- aonncmzuz tuvu scmoeeg jozluj. aceah omj svhjh loyyumuj kh lopu klu zowu acvkljog, zuykuwauv 22mj. ghq loj aukkuv dhwu omj ecpu luvu, svhjh wg eoj, zocj aceah hmu jog; omj klum tu dom dueuavoku hqv acvkljog-yovkcuz dhwshvkoaeg khnukluv. ok klok kcwu svhjh toz zkcee cm lcz ktuumz, oz klu lhaackz doeeuj klu cvvuzyhmzcaeu ktumkcuz auktuum dlcejlhhj omj dhwcmn hs onu ok klcvkg-klvuu";

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
