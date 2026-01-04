#include <iostream>
using namespace std;

// Sıralamadan önce ve sonra diziyi görmek için bu fonksiyonu kullanacağız.
void diziYazdir(int dizi[], int boyut) {
    for (int i = 0; i < boyut; i++) {
        cout << dizi[i] << " ";
    }
    cout << endl;
}

// Burası işin beyni. Küçükten büyüğe sıralama yapar.
void kucuktenBuyugeSirala(int dizi[], int boyut) {
    int gecici; // Sayıların yerini değiştirirken kullanacağımız "boş bardak"

    // Dış döngü: Her turda en büyük sayı sona taşınır.
    for (int i = 0; i < boyut - 1; i++) {
        
        // İç döngü: Bitişik sayıları kontrol eder.
        for (int j = 0; j < boyut - i - 1; j++) {
            
            // Eğer soldaki sayı (j), sağdakinden (j+1) BÜYÜKSE yer değiştir!
            if (dizi[j] > dizi[j + 1]) {
                
                //  Yer Değiştirme (Swap) İşlemi 
                gecici = dizi[j];       // 1. Sayıyı güvenli bir yere al
                dizi[j] = dizi[j + 1];  // 2. İkinci sayıyı birinciye koy
                dizi[j + 1] = gecici;   // 3. Kenara ayırdığımız sayıyı ikinciye koy
            }
        }
    }
}

int main() {
    // 5 elemanlı bir dizi oluşturalım
    int sayilar[5];

    cout << "Lutfen 5 adet sayi giriniz:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << (i + 1) << ". Sayi: ";
        cin >> sayilar[i];
    }

    cout << "\n--- Siralamadan Once ---" << endl;
    diziYazdir(sayilar, 5);

    // Fonksiyonumuzu çağırıp işi yaptırıyoruz
    kucuktenBuyugeSirala(sayilar, 5);

    cout << "\n--- Siralamadan Sonra ---" << endl;
    diziYazdir(sayilar, 5);

    return 0;
}