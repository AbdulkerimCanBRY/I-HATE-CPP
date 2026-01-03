#include <iostream>
using namespace std;

int main() {
    // [3] -> 3 Satır olacak (Apartman 3 katlı)
    // [2] -> 2 Sütun olacak (Her katta 2 daire var)
    // Şöyle hayal et:
    // [ 10, 20 ]  -> 0. Satır
    // [ 30, 40 ]  -> 1. Satır
    // [ 50, 60 ]  -> 2. Satır
    
    int sayilar[3][2] = {
        {10, 20},           // 0. satırın elemanları
        {30, 40},           // 1. satırın elemanları
        {50, 60}            // 2. satırın elemanları
    };

    // Tablo olduğu için İÇ İÇE DÖNGÜ (Nested Loop) kullanmak zorundayız.
    
    // Dış döngü: KATLARI (Satırları) gezer. (0, 1, 2)
    for (int i = 0; i < 3; i++) {
        
        cout << i << ". Satir: ";

        // İç döngü: DAİRELERİ (Sütunları) gezer. (0, 1)
        for (int j = 0; j < 2; j++) {
            // sayilar[satır][sütun] mantığıyla çağırıyoruz
            cout << sayilar[i][j] << " "; 
        }
        
        cout << endl; // Bir kat bitti, alt satıra geç
    }

    return 0;
}