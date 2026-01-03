#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () {
    int zar, sayilar[7] {0,0,0,0,0,0,0};                        // 1-6 arasındaki sayılar için
    srand(time(0));                                             // Rastgele sayı üretimi için
    for (int i=1; i<=100; i++) {                                // 100 kez zar atma işlemi
        zar = rand() %6+1;                                      // 1-6 arasında rastgele sayı üretimi
        sayilar [zar]++;                                        // Sayıların sıklığını artır
    }
    for (int j=1; j<=6; j++) {                                  // Sonuçları yazdırma işlemi
        cout << j << " sayisi " << sayilar[j] << " kere geldi." << endl;
    }
    return 0;
}