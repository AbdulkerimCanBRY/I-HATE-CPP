#include <iostream>
using namespace std;

int faktoriyel(int sayi) {                             // Faktöriyel hesaplama fonksiyonu
    if (sayi == 0) {                                   // Taban 0 ise sonuç 1'dir.
        return 1;                                      // Taban 0 ise sonuç 1'dir.
    } else {
        return sayi * faktoriyel(sayi - 1);            // Taban 0 değilse, n * (n-1)! hesapla. 
    }
}

int main() {
    int sayi;
    cout << "Bir sayi girin: ";
    cin >> sayi;
    cout << sayi << "! = " << faktoriyel(sayi) << endl;    // Fonksiyon çağrısı ve sonucu yazdırma
    return 0;
}
