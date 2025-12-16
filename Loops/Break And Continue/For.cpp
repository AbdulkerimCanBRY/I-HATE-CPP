#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {                                       
        if(i == 3){
            cout << "3. kurabiye yanık bunu at." << endl;
            continue;                                                       // Atla ve sonraki adıma geç
        }
        if(i == 7){
            cout << "7. kurabiyede kıl çıktı devamını yeme." << endl;
            break;                                                          // Döngüyü tamamen sonlandır.
        }
        cout << i << "Kurabiyeyi yedik." << endl;
    }
    return 0;
}

// Bu kodda 10 kurabiye yapıyoruz. 3. kurabiye yanık olduğu için onu atlıyoruz ve 7. kurabiyede kıl çıktığı için döngüyü tamamen sonlandırıyoruz.