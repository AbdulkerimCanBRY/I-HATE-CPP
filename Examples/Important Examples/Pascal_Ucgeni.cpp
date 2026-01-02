#include <iostream>

using namespace std;

int main() {
    int satirSayisi;
    
    cout << "Pascal ucgeni icin satir sayisini giriniz: ";
    cin >> satirSayisi;

    for (int i = 0; i < satirSayisi; i++) {                             // Her satir icin dongu
        
        for (int bosluk = 1; bosluk <= satirSayisi - i; bosluk++) {     // Ucgenin sekli icin bosluklar
            cout << "  ";
        }

        int deger = 1;                                                  // Her satirda ilk deger 1'dir
        
        for (int j = 0; j <= i; j++) {                                  // Her satirdaki elemanlar icin dongu
            cout << deger << "   ";
            
            deger = deger * (i - j) / (j + 1);                          // Binom katsayisini hesapla
        }
        
        cout << endl;
    }

    return 0;
}