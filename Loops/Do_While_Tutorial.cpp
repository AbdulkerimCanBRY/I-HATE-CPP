#include <iostream>
using namespace std;

int main() {
    int girilensifre;
    const int dogrusifre = 1234;                                    // Dogru sifre sabit olarak tanimlanir

    do{                                                             // En az bir kez calisacak dongu baslatilir
        cout << "Sifreyi giriniz: ";
        cin >> girilensifre;                                        // Kullanicidan sifre alinir

        if(girilensifre != dogrusifre) {                            // Girilen sifre dogru degilse uyari verilir
            cout << "Yanlis sifre, tekrar deneyiniz." << endl;
        }

    } while(girilensifre != dogrusifre);                            // Girilen sifre dogru olana kadar dongu devam eder
    cout << "Sifre dogru, erisim saglandi." << endl;                // Dogru sifre girildiginde erisim izni verilir
    return 0;
}