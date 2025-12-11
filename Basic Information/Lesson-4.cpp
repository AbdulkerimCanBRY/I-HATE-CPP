#include <iostream>

using namespace std;

int main() {

    // Pi sayısı asla değişmez, o yüzden 'const' yapıyoruz.
    const double PI_SAYISI = 3.14;

    // Pizzanın yarıçapı değişebilir (Küçük boy, büyük boy vs.)
    int pizzaYaricapi = 10; // İlk sipariş: 10 cm yarıçaplı küçük pizza

    cout << "--- Siparis 1: Kucuk Boy ---" << endl;
    cout << "Yaricap: " << pizzaYaricapi << " cm" << endl;
    
    // Alan Hesabı: Pi * r * r
    double pizzaAlani = PI_SAYISI * pizzaYaricapi * pizzaYaricapi;
    cout << "Pizzanin Alani: " << pizzaAlani << " cm2" << endl;


    // --- SENARYO DEVAMI: MÜŞTERİ FİKRİNİ DEĞİŞTİRDİ ---
    
    cout << "\n...Musteri fikrini degistirdi, BUYUK boy istiyor...\n";

    // Değişken olduğu için değerini güncelleyebiliriz (Üzerine yeni değer yazarız)
    pizzaYaricapi = 20; 

    // AMA Pi sayısını değiştiremeyiz.
    // PI_SAYISI = 5.0; // <-- Eğer bu satırın başındaki yorumu kaldırırsan kod KIRMIZI hata verir!

    cout << "\n--- Siparis 2: Buyuk Boy ---" << endl;
    cout << "Yeni Yaricap: " << pizzaYaricapi << " cm" << endl;
    
    // Yeni hesabı yapalım
    pizzaAlani = PI_SAYISI * pizzaYaricapi * pizzaYaricapi;
    cout << "Yeni Pizzanin Alani: " << pizzaAlani << " cm2" << endl;

    return 0;
}