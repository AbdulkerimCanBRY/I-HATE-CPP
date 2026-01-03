#include <iostream>
#include <cstdlib>                                  // Rastgele sayı üretimi için gerekli kütüphane
#include <ctime>                                    // Zaman bilgisi için gerekli kütüphane

using namespace std;

int main() {
    srand(time(0));                                 // Rastgele sayı üretimi için tohumlama
    int rastgeleSayi = rand() % 100 + 1;            // 1 ile 100 arasında rastgele bir sayı
    int tahmin;
    int denemeSayisi = 0;

    cout << "1 ile 100 arasında bir sayı tahmin edin: ";

    do {
        cin >> tahmin;
        if (tahmin < 1 || tahmin > 100) {
            cout << "Lütfen 1 ile 100 arasında bir sayı girin." << endl;
            continue;
        }
        denemeSayisi++;

        if (tahmin < rastgeleSayi) {
            cout << "Daha yüksek bir sayı deneyin." << endl;
        } else if (tahmin > rastgeleSayi) {
            cout << "Daha düşük bir sayı deneyin." << endl;
        } else {
            cout << "Tebrikler! Sayıyı " << denemeSayisi << " denemede buldunuz." << endl;
        }
    } while (tahmin != rastgeleSayi);

    return 0;
}