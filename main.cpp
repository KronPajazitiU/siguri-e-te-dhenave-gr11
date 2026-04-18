//Te shkruhet kodi per Enkriptimi dhe dekriptimi permes Beaufort Cipher.
#include <iostream>
#include <string>
#include <vector>

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

using namespace std;
