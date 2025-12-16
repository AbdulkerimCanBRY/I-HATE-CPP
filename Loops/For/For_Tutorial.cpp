#include <iostream>
using namespace std;

int main() {
    for (int i = 10; i >= 0; i--) {                     // Döngü 10'dan başlar ve 0'a kadar devam eder
        cout << "Geri Sayım: " << i << endl;            // Her adımda i'nin değeri yazdırılır
        if (i == 0) {                                   // Eğer i 0'a eşitse
            cout << "Sıfıra ulaşıldı!" << endl;         // Sıfıra ulaşıldığında mesaj yazdırılır
        }
    }
}