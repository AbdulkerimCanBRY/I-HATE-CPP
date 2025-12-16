#include <iostream>

using namespace std;

int main() {
    
    int sira = 0;                                                   // Hangi sarkidayiz

    while (sira < 10) {
        
        sira++;         // Bunu en basa koyuyorum yoksa continue yapinca sonsuz donguye giriyor, altta kalirsa sayi artmiyor cunku.


        // 3. sarkiyı beğenmedik, dinlemeden gec.
        if (sira == 3) {
            cout << "Sarkıyı beğenmedim, geciyorum..." << endl;
            continue; 
        }

        // 6'ya gelince sarj bitti varsayalim.
        if (sira == 6) {
            cout << "Sarj bitti, kapaniyor." << endl;
            break; 
        }
        cout << sira << ". sarki caliyor..." << endl;
    }
    return 0;
}