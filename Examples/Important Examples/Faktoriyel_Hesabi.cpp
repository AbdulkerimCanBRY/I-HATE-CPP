#include <iostream>
using namespace std;

int main() {
    int sayi, i, faktoriyel = 1;                                        // faktoriyel değişkeni 1 olarak başlatılır
    cout << "Bir sayi giriniz: ";
    cin >> sayi;
    if (sayi <0) {                                                      // negatif sayılar için uyarı mesajı
        cout << "Sıfırdan daha büyük bir sayi giriniz." << endl;
    } else {
        for (i = 1; i <= sayi; i++) {                                   // 1'den başlayarak sayıya kadar olan sayılarla çarpma işlemi
            faktoriyel *= i;                                            // faktoriyel = faktoriyel * i işlemi yapılır.
        }
        cout << sayi << "!= " << faktoriyel << endl;                    // sonucu ekrana yazdırma (Örn: 5! = 120)
        return 0;
    }
}