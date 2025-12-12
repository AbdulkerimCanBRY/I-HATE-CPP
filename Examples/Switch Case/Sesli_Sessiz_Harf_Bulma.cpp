#include <iostream>
using namespace std;

int main() {
    char harf;
    cout << "Bir harf giriniz: ";
    cin >> harf;
    switch(harf) {                                                               // Switch Case yapısı kullanılarak harf kontrolü
        case 'a':                                                                // Küçük sesli harfler
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':                                                                // Büyük sesli harfler
        case 'E':   
        case 'I':
        case 'O':
        case 'U':                                                                // Buraya kadar break kullanılmadı çünkü tüm durumlar aynı işlemi yapacak
            cout << harf << " bir sesli harftir." << endl;
            break;
        default:                                                                 // Diğer tüm karakterler için
            cout << harf << " bir sessiz harftir veya harf değildir." << endl;
            break;

    }
}