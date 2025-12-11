#include <iostream>

using namespace std;

int main() {
    int sicaklik;

    cout << "Hava kac derece?: ";
    cin >> sicaklik;

    cout << "\n--- Karar Ani ---\n";

    // 1. DURUM: HAVA ÇOK SOĞUK MU?
    // İlk soruyu buraya soruyoruz.
    if (sicaklik < 10) {                                                        // if'in parantez içindeki şart doğruysa (true) bu blok çalışır.
        cout << "Hava cok soguk! Montunu giy." << endl;
    }
    // 2. DURUM: PEKİ ÇOK SICAK MI?
    // Yukarıdaki (soğuk) değilse, buna bakar.
    else if (sicaklik > 30) {                                                   // else if'in parantez içindeki şart doğruysa (true) bu blok çalışır.
        cout << "Hava yaniyor! Tisort giy." << endl;
    }
    // 3. DURUM: HİÇBİRİ DEĞİLSE (NORMAL)
    // Ne çok soğuk, ne çok sıcak. Geriye kalan her şey için burası çalışır.
    else {                                                                      // else'in parantezinde şart yoktur, yukarıdakilerin hiçbiri doğru değilse bu blok çalışır.
        cout << "Hava normal. Gomlek giyip cikabilirsin." << endl;
    }

    return 0;
}