#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Fibonacci dizisinin eleman sayısını girin: ";
    cin >> n;

    int a = 0, b = 1, c, i;              // Fibonacci dizisinin ilk iki elemanını tanımla
    cout << "Fibonacci Dizisi: " << a << ", " << b;

    for (i = 2; i < n; i++) {
        c = a + b;                       // Fibonacci dizisinin bir sonraki elemanını hesapla
        cout << ", " << c;               // Hesaplanan elemanı ekrana yazdır
        a = b;                           // Önceki iki elemanı güncelle
        b = c;                           // Son iki elemanı güncelle
    }

    cout << endl;
    return 0;
}