//Te shkruhet kodi per Enkriptimi dhe dekriptimi permes Beaufort Cipher.
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// -- LOGJIKA MATEMATIKE ---
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
