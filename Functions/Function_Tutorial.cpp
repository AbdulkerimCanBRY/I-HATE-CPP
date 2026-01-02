#include <iostream>
using namespace std;

// --- 1. TİP: GERİYE DEĞER DÖNDÜRMEYEN (void) FONKSİYON ---
// Bu arkadaş "emir kulu" gibidir. "Yap" dersin yapar, geriye bir sayı/sonuç vermez.

void selamla(string isim) {
    cout << "\n";
    cout << "Selam " << isim << ", hosgeldin!" << endl;       // Sadece ekrana yazi yazar, islem biter
}


// 2. TİP: GERİYE DEĞER DÖNDÜREN (int) FONKSİYON
// Bu arkadaş "hesap makinesi" gibidir. Ona bir şey verirsin, o da sana sonucu geri verir.

int kareAl(int sayi) {
    int sonuc = sayi * sayi;                                  // Gelen sayiyi kendisiyle carpar
    
    return sonuc;                                             // 'return' ile sonucu, fonksiyonu cagiran yere firlatir
}


int main() {
    
    // void Fonksiyonun Kullanimi
    selamla("Abdulkerim");                                    // Fonksiyonu cagirdik, gorevini yapti ve bitti. Esitleme yapilmaz!

    cout << "-----------------------" << endl;

    // int Fonksiyonun Kullanimi
    int gelenCevap = kareAl(5);                               // Fonksiyon hesapladi, 25 cevabini dondu. Biz de onu degiskene koyduk.
    
    cout << "5'in karesi: " << gelenCevap << endl;            // Artik elimizdeki sonucu ekrana basabiliriz.


    // Not: Degiskene atmadan direkt islem icinde de kullanabilirsin
    cout << "10'un karesi: " << kareAl(10) << endl;           // kareAl(10) calisir, yerine 100 gelir, cout onu yazar.
    cout << "\n";

    return 0;
}