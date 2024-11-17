#include <iostream>
using namespace std;

long sum(int arr[], int n) {
    long sum = 0;
    for (int i = 0; i < n; i++) { sum += arr[i]; }
    return sum;
}

int main(void) {

    int n = 0;
    cin >> n;
    
    int *miski = new int[n];
    for (size_t i = 0; i < n; i++) { miski[i] = i + 1; }

    int used_miski = 0;
    long half_sum = sum(miski, n) / 2;
    
    for (size_t i = 0; i < n; i++) {
        if (sum(miski, i) == half_sum) {
            used_miski = i;
            break;
        }
    }


    if (used_miski == 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;

        cout << "Masha: " << used_miski << endl;
        for (size_t i = 0; i < used_miski; i++) {
            cout << miski[i] << " ";
        }
        cout << endl;

        cout << "Petya: " << (n-used_miski) << endl;
        for (size_t i = used_miski; i < n; i++ ) {
            cout << miski[i] << " ";
        }
        cout << endl;
    }


    delete[] miski;
    return 0;
}