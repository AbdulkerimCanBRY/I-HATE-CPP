#include <iostream>
using namespace std;

// Fonksiyonumuz ondalıklı sonuç verebileceği için 'float' kullandık
float usAlma(float taban, float us) {                 
    float sonuc = 1;                         // Çarpma işlemi yapacağız, sepeti 1 ile başlatıyoruz (etkisiz eleman).
    
    if (taban == 0) {                        // 1. KONTROL: Eğer taban 0 ise (0^5) sonuç direkt 0'dır.
        sonuc = 0;
    }
    else if (us == 0) {                      // 2. KONTROL: Eğer üs 0 ise (5^0) matematik kuralı gereği sonuç 1'dir.
        sonuc = 1;
    }
    else if (us < 0) {                       // 3. KONTROL: Üs Negatif ise (Örn: 2^-3)
        for (int i = 0; i < -us; i++)        // Üs -3 ise döngü dönemez, o yüzden "-us" diyerek onu +3 yapıyoruz.
            sonuc = sonuc * (1 / taban);     // Negatif üs kuralı: Sayıyı ters çevirip çarp (2 yerine 1/2 ile çarp).
    }
    else {                                   // 4. DURUM: Üs Pozitif ise (Normal üs alma)
        for (int i = 0; i < us; i++)         // Üs sayısı kadar (Örn: 3 kere) döngüyü çalıştır.
            sonuc = sonuc * taban;           // Sepetteki sayıyı tabanla çarpıp büyüt.
    }
    
    return sonuc;                            // Hesaplanan son değeri ana programa (main'e) fırlat.
}
    
        
int main() {
    float taban, us;
    
    cout << "Taban degerini girin: ";
    cin >> taban;                            // Kullanıcıdan taban sayısını al.
    
    cout << "Us degerini girin: ";
    cin >> us;                               // Kullanıcıdan üs sayısını al.

    float sonuc = usAlma(taban, us);         // Fonksiyonu çağır, hesaplasın, cevabı 'sonuc' değişkenine koy.
    
    cout << taban << " ^ " << us << " = " << sonuc << endl; // Sonucu ekrana düzgünce yazdır.

    return 0;
}