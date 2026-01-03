#include <iostream>
using namespace std;

int main() {
    // Bilgisayara diyoruz ki: "Bana hafızada 3 tane tam sayı (int) sığacak bir kutu aç."
    // Köşeli parantez [] içindeki sayı, kutunun kaç bölmeli olacağını söyler.
    
    int notlar[3] {50, 85, 100};

    // ÖNEMLİ: Bilgisayarda sayma işlemi 0'dan başlar! (0, 1, 2 diye gider).
    // Yani ilk kutu [1] değil, [0]'dır.
    // Çağırırken de yine oda numarasıyla (indeks) çağırıyoruz.
    
    cout << "Birinci sinav notu: " << notlar[0] << endl;
    cout << "Ikinci sinav notu: "  << notlar[1] << endl;
    cout << "Ucuncu sinav notu: "  << notlar[2] << endl;
    
    // Toplama işlemi bile yapabilirsin:
    int ortalama = (notlar[0] + notlar[1] + notlar[2]) / 3;
    cout << "Ortalama: " << ortalama << endl;

    return 0;
}