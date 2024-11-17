#include <iostream>
using namespace std;


long sum(int arr[], int n) {
    long sum = 0;
    for (int i = 0; i < n; i++) { sum += arr[i]; }
    return sum;
}


void divideByGroup(int n) {

    int *masha = new int[n];
    int *petya = new int[n];
    
    int counter_p = 0, counter_m = 0;

    for (int i = n; i >= 1; i--) {
        if ( sum(masha, n) > sum(petya, n) ) {
            petya[counter_p] = i;
            counter_p++;
        } else {
            masha[counter_m] = i;
            counter_m++;
        }
    }

    cout << "MASHA: ";
    for (size_t i = 0; i < counter_m; i++) {
        cout << masha[i] << " ";
    }
    cout << endl;

    cout << "PETYA: ";
    for (size_t i = 0; i < counter_p; i++) {
        cout << petya[i] << " ";
    }
    cout << endl;

    delete[] masha;
    delete[] petya;
}


int main(void) {

    int n = 0;
    cin >> n;
    
    // Если сумма нечетная, то распределить не получится
    if ((n * (n + 1) / 2) % 2 == 0) {
        cout << "YES" << endl;
        divideByGroup(n);
    } else {
        cout << "NO" << endl;
    }

    return 0;
}