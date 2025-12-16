#include <iostream>
using namespace std;

int main() {
    int n, i=1;                                                     // n: kullanicidan alinan sayi, i: carpim tablosu icin sayac
    cout << "Bir sayi giriniz: ";
    cin >> n;
    if(n<1 || n>10) {                                               // Girilen sayi 1 ile 10 arasinda degilse uyari ver
        cout << "1 ile 10 arasinda bir sayi giriniz." << endl;
    } else {
        cout << n << " carpim tablosu:" << endl;
        while(i <= 10) {                                            // i 10'dan kucuk veya esit oldugu surece dongu devam eder   
            cout << n << " x " << i << " = " << n * i << endl;      // Carpim tablosunu ekrana yazdir
            i++;                                                    // Sayaci bir arttir
    }
}
    return 0;
}