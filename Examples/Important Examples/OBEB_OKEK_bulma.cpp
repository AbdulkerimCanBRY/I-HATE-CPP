#include <iostream>
using namespace std;

int main() {
    int sayı1, sayı2, ebob, ekok;
    cout << "Birinci sayıyı girin: ";
    cin >> sayı1;
    cout << "İkinci sayıyı girin: ";
    cin >> sayı2;

    // EBOB bulma
    for (int i = 1; i <= sayı1 && i <= sayı2; i++) {
        if (sayı1 % i == 0 && sayı2 % i == 0) {
            ebob = i;
        }
    }

    // EKOK bulma
    ekok = (sayı1 * sayı2) / ebob;

    cout << "EBOB: " << ebob << endl;
    cout << "EKOK: " << ekok << endl;

    return 0;
}