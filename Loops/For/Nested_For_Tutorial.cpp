#include <iostream>

using namespace std;

int main() {
    
    // Önce dış döngüyü kuruyoruz. Bu bizim KATLARIMIZ.
    // Toplam 3 kat gezeceğiz.
    for (int kat = 1; kat <= 3; kat++) {

        cout << "Varan " << kat << ": Su an " << kat << ". kata ciktik." << endl;

        // Burası İÇ DÖNGÜ. Yani o kattaki kapı numaraları.
        // Mantık şu: Postacı 1. kattayken bu döngüye girer, 4 kapıyı da gezer, SONRA çıkar.
        for (int kapi = 1; kapi <= 4; kapi++) {
            
            // \t koydum ki çıktı biraz içeriden başlasın, daha düzgün dursun.
            cout << "\t-> Tik tik! Daire " << kapi << " postasi verildi." << endl;
        }

        // İçerideki döngü bitti, yani o kattaki 4 kapı da gezildi.
        // Şimdi bir çizgi çekelim de diğer kata geçtiğimiz belli olsun.
        cout << "-----------------------------------" << endl;
    }

    cout << "Bitti, tum bina gezildi." << endl;

    return 0;
}