#include <iostream>
using namespace std;

int main() {
    int gün;
    cout << "Bir gün numarası girin (1-7): ";
    cin >> gün;
    switch(gün) {                                                   // Switch Case yapısı başlangıcı
        case 1:                                                     // Eğer gün 1 ise
            cout << "Pazartesi" << endl;                            // Pazartesi yazdır
            break;                                                  // Break ile çıkış yap
        case 2:
            cout << "Salı" << endl;
            break;
        case 3:
            cout << "Çarşamba" << endl;
            break;
        case 4:
            cout << "Perşembe" << endl;
            break;
        case 5:
            cout << "Cuma" << endl;
            break;
        case 6:
            cout << "Cumartesi" << endl;
            break;
        case 7:                                                     
            cout << "Pazar" << endl;
            break;
        default:                                                    // Hiçbir case'e uymuyorsa
            cout << "Geçersiz gün numarası!" << endl;               // Hata mesajı yazdır
    }
}