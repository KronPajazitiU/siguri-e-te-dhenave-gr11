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

return 0;
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



