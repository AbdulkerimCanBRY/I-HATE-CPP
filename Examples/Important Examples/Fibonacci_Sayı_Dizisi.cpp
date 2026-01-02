#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Fibonacci dizisinin eleman sayısını girin: ";
    cin >> n;

    int a = 0, b = 1, c, i;
    cout << "Fibonacci Dizisi: " << a << ", " << b;

    for (i = 2; i < n; i++) {
        c = a + b;
        cout << ", " << c;
        a = b;
        b = c;
    }

    cout << endl;
    return 0;
}