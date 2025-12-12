#include <iostream>
using namespace std;

int main() {
    char op;                                                
    float x, y, sonuc;
    cout << "Bir islem seciniz (+, -, *, /): ";
    cin >> op;
    cout << "Birinci sayiyi giriniz: ";
    cin >> x;
    cout << "Ikinci sayiyi giriniz: ";
    cin >> y;
    switch(op) {                                                        // Switch case yapisi basliyor
        case '+':                                                       // Toplama islemi
            sonuc = x+y;                                                // Sonucu hesapla
            cout << "Sonuc: " << sonuc << endl;                         // Sonucu ekrana yazdir
            break;                                                      // Switch case yapisindan cik
        case '-':
            sonuc = x-y;
            cout << "Sonuc: " << sonuc << endl;
            break;
        case '*':
            sonuc = x*y;
            cout << "Sonuc: " << sonuc << endl;
            break;
        case '/':
            if(y != 0) {                                                // Bolme islemi icin sifir kontrolu
                sonuc = x/y;
                cout << "Sonuc: " << sonuc << endl;
            } else {                                                    // Sifira bolme hatasi
                cout << "Hata: Sifira bolme hatasi!" << endl;
        default:                                                        // Gecersiz islem secimi
            cout << "Gecersiz islem secimi!" << endl;
            break;
    }
}
    return 0;
}