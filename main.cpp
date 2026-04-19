//Te shkruhet kodi per Enkriptimi dhe dekriptimi permes Beaufort Cipher.
#include <iostream>
#include <string>
#include <vector>
int main() {
    int zgjedhja;
    cout << "==============================" << endl;
    cout << "   BEAUFORT CIPHER SYSTEM    " << endl;
    cout << "==============================" << endl;
    cout << "1. Enkripto Mesazhin" << endl;
    cout << "2. Dekripto Mesazhin" << endl;
    cout << "Zgjedhja juaj (1 ose 2): ";
    cin >> zgjedhja;
    cin.ignore(); // Pastron buffer-in pas leximit të numrit

    if (zgjedhja != 1 && zgjedhja != 2) {
        cout << "Zgjedhje e gabuar! Programi do te mbyllet." << endl;
        return 1;
    }

    string msg = getMessage("\nShkruani tekstin: ");
    string key = getMessage("Shkruani celësin: ");

    if (!isKeyValid(key)) {
        cout << "Gabim: Celësi duhet të ketë vetëm shkronja!" << endl;
        return 1;
    }

    // Ekzekutimi (logjika eshte e njejte per te dyja)
    string result = processBeaufort(msg, key);

    if (zgjedhja == 1) {
        cout << "\n--- Rezultati i Enkriptimit ---" << endl;
    } else {
        cout << "\n--- Rezultati i Dekriptimit ---" << endl;
    }
    
    cout << "Teksti: " << result << endl;
    cout << "==============================" << endl;

    return 0;
