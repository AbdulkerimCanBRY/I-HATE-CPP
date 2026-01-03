#include <iostream>
using namespace std;

int main() {
    bool gemiler[5][5] ={                                       // 5x5'lik bir gemi tahtası
        {0,0,1,1,0},                                            
        {1,0,0,0,0},
        {0,0,0,0,0},
        {0,1,0,1,0},
        {0,0,0,0,0}
    };
    int atis = 0, toplamAtis = 0;                               // Toplam atış sayısı ve doğru atış sayısı
    int sira, sutun;
        while (atis < 5) {                                      // 5 doğru atış yapılana kadar devam et
            cout << "Kordinatları giriniz: \n";
            cout << "0-4 Arası Sira numarası giriniz: ";
            cin >> sira;
            if (sira < 0 || sira > 4) {                         // Geçersiz sıra numarası kontrolü
                cout << "Geçersiz sıra numarası. Tekrar deneyin.\n";
                continue;                                       // Geçersiz giriş durumunda döngü başa döner
            }
            cout << "0-4 Arası Sutun numarası giriniz: ";
            cin >> sutun;
            if (sutun < 0 || sutun > 4) {
                cout << "Geçersiz sütun numarası. Tekrar deneyin.\n";
                continue;
            }
            if (gemiler[sira][sutun] == 1) {                    // Doğru atış kontrolü
                cout << "Tebrikler! Gemiyi vurdunuz.\n";
                gemiler[sira][sutun] = 0;                       // Vurulan gemiyi tahtadan kaldır
                atis++;                                         // Doğru atış sayısını artır
            } else {
                cout << "Isabet yok. Tekrar deneyin.\n";
            }
            toplamAtis++;                                       // Toplam atış sayısını artır
            if (toplamAtis == 5) {                              // 5 atış yapıldığında
                cout << "Oyun bitti! Toplam atış sayınız: " << toplamAtis << endl;          // Oyun bitti mesajı
                return 0;
            }
        }
    }