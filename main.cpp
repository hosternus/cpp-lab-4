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
    
    int sum_m = n * (n - 1) / 2;

    // int *miski = new int[n];
    // for (size_t i = 0; i < n; i++) { miski[i] = i + 1; }


    if (sum_m % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    


    // delete[] miski;
    return 0;
}