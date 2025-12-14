#include <iostream>
using namespace std;

int main() {
    int i=1;                                    // i bizim sayac değişkenimiz
    while(i<=10){                               // i 10'dan küçük veya eşit olduğu sürece döngü devam eder
        cout << "Hello World" << endl;          // Ekrana döngü bitimene kadar "Hello World" yazdırır
        i++;                                    // Sayacı 1 artırır  
    }
    return 0;
}

// Bu program, "Hello World" ifadesini ekrana 10 kez yazdırır.