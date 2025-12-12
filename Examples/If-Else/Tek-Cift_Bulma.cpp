#include <iostream>
using namespace std;

int main() {
    int x;
    cout <<"Bir sayı giriniz: ";
    cin >> x;
    if(x % 2 == 0){                                             // Burada çift mi diye kontrol ediyoruz. 
        cout << "Girdiginiz sayi cifttir." << endl;
    }
    else{
        cout << "Girdiginiz sayi tektir." << endl;
    }
    return 0;
}