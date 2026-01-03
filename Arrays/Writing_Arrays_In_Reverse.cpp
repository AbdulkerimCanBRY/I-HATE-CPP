#include <iostream>
using namespace std;

int main() {
   int sayilar[5],i;

cout << "Dizi sayılarını giriniz: ";
for (i=0; i<5; i++) {
    cin >> sayilar[i];
}
    cout << "\nOrijinal Dizi: ";
    for (int j=0; j<5; j++) {
        cout << sayilar[j] << " ";
    }

    cout << "\nTers Dizi: ";
    for (int j=4; j>=0; j--) {
        cout << sayilar[j] << " " ;
    }
 
}
