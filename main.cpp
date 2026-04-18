//Te shkruhet kodi per Enkriptimi dhe dekriptimi permes Beaufort Cipher.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

//  INPUTI DHE VALIDIMI
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
