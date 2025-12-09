#include <iostream>
#include <string>                                         // String (metin) kullanmak için gerekli kütüphane

using namespace std;

int main() {
    cout << "--- Oyun Karakteri Profili ---\n\n";

    // 1. INT (Integer): Tam sayılar için kullanılır.
    // Hafızada genellikle 4 byte yer kaplar.
    int seviye = 5;

    // 2. DOUBLE: Hassas ondalıklı sayılar için kullanılır.
    // Virgülden sonra daha çok basamak tutar (8 byte). Genelde varsayılan ondalık budur.
    double hasarGucu = 145.75;

    // 3. FLOAT: Daha az yer kaplayan ondalıklı sayılar (4 byte).
    // Sonuna 'f' koyarak float olduğunu belirtiriz.
    float saldiriHizi = 1.5f;

    // 4. CHAR (Character): Sadece TEK bir karakter veya sembol tutar.
    // Tek tırnak (' ') ile yazılır.
    char rütbe = 'A';

    // 5. STRING: Metinleri tutar.
    // Çift tırnak (" ") ile yazılır. (Aslında bir sınıf yapısıdır ama temel tip gibi kullanırız).
    string karakterAdi = "Golge Avcisi";

    // 6. BOOL (Boolean): Sadece iki değer alır: true (doğru/1) veya false (yanlış/0).
    // Mantıksal kontroller için kullanılır.
    bool yasiyorMu = true;

    cout << "Karakter Adi  : " << karakterAdi << endl;
    cout << "Rutbesi       : " << rütbe << endl;
    cout << "Seviyesi      : " << seviye << endl;
    cout << "Hasar Gucu    : " << hasarGucu << endl;
    cout << "Saldiri Hizi  : " << saldiriHizi << endl;
    
    // Bool değeri normalde ekrana 1 veya 0 olarak basılır.
    // (true -> 1, false -> 0)
    cout << "Yasiyor mu?   : " << yasiyorMu << endl; 

    return 0;
}