#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Iki sayi giriniz: ";
    cin >> a >> b;
    if(a>b){                                            // a b'den büyük mü?
        cout << "Maksimum sayi: " << a << endl;
        cout << "Minimum sayi: " << b << endl;
    }
    else{                                               // a b'den büyük değilse (büyük eşit de olabilir)
        cout << "Maksimum sayi: " << b << endl;
        cout << "Minimum sayi: " << a << endl;
    }
    return 0;
}