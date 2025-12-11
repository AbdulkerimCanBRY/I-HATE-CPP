#include <iostream>

using namespace std;

int main() {
    cout << "--- Ehliyet Uygunluk Sistemi ---\n\n";

    int yas;
    int sinavPuani;
    const int GECME_NOTU = 70;
    const int SINIR_YAS = 18;

    // cin >> degisken; komutu kullanıcının klavyeden girdiği değeri değişkene atar.
    // 'c'onsole 'in'put (konsol girdisi) demektir.
    
    cout << "Lutfen yasinizi girin: ";
    cin >> yas;

    cout << "Yazili sinav puaninizi girin (0-100): ";
    cin >> sinavPuani;


    
    int dogumYili = 2025 - yas;    
    int gelecekYas = yas + 1;         
    int puaninYarisi = sinavPuani / 2;   
    int puanMod = sinavPuani % 10;          // Mod Alma (%) -> Bir sayının bölümünden kalanı verir.
                                            // Örn: 75 % 10 = 5 kalır.

    cout << "\n--- Hesaplamalar ---\n";
    cout << "Tahmini Dogum Yili: " << dogumYili << endl;
    cout << "Seneye Yasin: " << gelecekYas << endl;
    cout << "Puanin 10'a bolumunden kalan (Mod): " << puanMod << endl;


    // Sonuç her zaman 1 (True) veya 0 (False) olur.
    
    bool yasUygunMu = (yas >= SINIR_YAS);                 // Yaş 18'den büyük veya eşit mi?
    bool puanYeterliMi = (sinavPuani >= GECME_NOTU);      // Puan 70'ten büyük veya eşit mi?
    bool tamPuanMi = (sinavPuani == 100);                 // Puan tam 100 mü?


    
    cout << "\n--- Sonuc ---\n";

    // !! Burada if-else yapısını kullandık ama bunu diğer derste göstereceğiz. !!

    // && (VE) Operatörü: Her iki şart da DOĞRU olmalı.
    if (yasUygunMu && puanYeterliMi) {
        cout << "TEBRIKLER! Ehliyet alabilirsiniz." << endl;
        
        // İç içe bir kontrol (Tam puan durumu)
        if (tamPuanMi) {
            cout << "(Ayrica tam puan aldiginiz icin ustun basari belgesi kazandiniz!)" << endl;
        }
    } 
    // || (VEYA) Operatörü: Şartlardan BİRİ bile doğru olsa yeter (Burada negatif örnek için kullandık).
    else if (!yasUygunMu || !puanYeterliMi) {
        // ! (DEĞİL) Operatörü: True'yu False, False'u True yapar.
        cout << "UZGUNUZ. Ehliyet alamazsiniz." << endl;
        
        if (yas < SINIR_YAS) cout << "-> Yasiniz tutmuyor." << endl;
        if (sinavPuani < GECME_NOTU) cout << "-> Puaniniz yetersiz." << endl;
    }

    return 0;
}