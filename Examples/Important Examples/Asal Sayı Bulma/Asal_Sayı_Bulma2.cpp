#include <iostream>
using namespace std;

int main() {
    int sayi, i, control=1, result;                                 // control değişkeni asal sayı kontrolü için kullanılır.
                                                                    // result değişkeni sayının karekökünü tutar.
    cout << "Pozitif bir tamsayi giriniz: ";
    cin >> sayi;
    if (sayi < 2) {                                                 // 2'den küçük sayılar asal sayı değildir.
        cout << "Lütfen daha büyük bir sayı giriniz." << endl; 
        return 0;
    }
    result = sqrt(sayi);                                            // Sayının karekökü hesaplanır.
    for (i = 2; i <= result; i++) {                                 // Sayının kareköküne kadar olan sayılarla bölünebilirlik kontrolü yapılır.
        if (sayi % i == 0) {                                        // Eğer sayı herhangi bir sayıya tam bölünüyorsa asal değildir.
            control=2;                                              // control değişkeni 2 olarak ayarlanır.
            break;
        }
    }
    if (control == 2) {
        cout << sayi << " asal bir sayı değildir." << endl;        
    } else {
        cout << sayi << " asal bir sayıdır." << endl;
    }
}