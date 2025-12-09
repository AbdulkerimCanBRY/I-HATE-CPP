#include <iostream>

using namespace std;

int main() {
    cout << "--- Kacis Karakterleri Ornegi ---\n\n";        // \n: Yeni satıra geçer

    cout << "Ad:\tAbdulkerim\n";                                   // \t bir tab boşluk bırakır
    cout << "Bolum:\tYazilim\n\n";

    cout << "\"Merhaba\" dedi.\n";                          // \" çift tırnağı yazdırır
    cout << "Tek tirnak: \'\n";                             // \' tek tırnağı yazdırır
    cout << "Dosya Yolu: C:\\Windows\n\n";                  // \\ ekrana bir tane \ basar

    cout << "Elmaa\b\n";                                    // \b imleci bir geri alır, sondaki 'a' harfi silinir (görünmez)
 
    cout << "Eski Yazi\rYeni\n";                            // İmleci satırın en başına alır ve oradan yazmaya devam eder (Öncekilerin üstüne yazar)


    cout << "Islem Tamam!\a" << endl;                       // \a bilgisayardan "bip" sesi çıkarır

    return 0;
}