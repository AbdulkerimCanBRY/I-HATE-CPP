#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Bir sayı girin: ";
    cin >> n;

    cout << n << " sayısına kadar olan asal sayılar: ";                 // Asalları bulma ve yazdırma
    for (int i = 2; i <= n; i++) {                                      // 2'den başlayarak n'e kadar olan sayılar
        bool asal = true;                                               // Asal olduğunu varsayalım
        for (int j = 2; j < i; j++) {                                   // 2'den i-1'e kadar olan sayılarla bölünebilirlik kontrolü
            if (i % j == 0) {                                           // Eğer i, j'ye tam bölünüyorsa
                asal = false;                                           // Asal değil
                break;
            }
        }
        if (asal) {                                                     // Eğer asal ise
            cout << i << " ";                                           // Asal sayıyı yazdır
        }
    }
    return 0;
}

// Bu program, kullanıcıdan bir sayı alır ve o sayıya kadar olan tüm asal sayıları ekrana yazdırır.