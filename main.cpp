//Te shkruhet kodi per Enkriptimi dhe dekriptimi permes Beaufort Cipher.

#include <iostream>
#include <string>
#include <vector>

using namespace std;


//  Imputi dhe validimi
bool isKeyValid(string key) {
    if (key.empty()) return false;
    for (char c : key) {
        if (!isalpha(c)) return false;
    }
    return true;
}

string getMessage(string prompt) {
    string input;
    cout << prompt;
    getline(cin, input);
    return input;
}

// logjika 
char transformChar(char p, char k) {
    if (!isalpha(p)) return p;

    bool isLower = islower(p);
    char P = toupper(p);
    char K = toupper(k);

    // Formula: C = (K - P + 26) % 26
    int cIndex = (K - P + 26) % 26;
    char res = (char)(cIndex + 'A');

    return isLower ? (char)tolower(res) : res;
}
//text processing
string processBeaufort(string text, string key) {
    string result = "";
    int keyIndex = 0;

    for (int i = 0; i < text.length(); i++) {
        if (isalpha(text[i])) {
            result += transformChar(text[i], key[keyIndex % key.length()]);
            keyIndex++;
        } else {
            result += text[i];
        }
    }
    return result;
}



