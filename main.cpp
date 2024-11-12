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
    int miski[n];
    // ошибка нужен динамический массив
    for (int i = 0; i < n; i++) { miski[i] = i + 1; }

    if (sum(miski, n) % 2 != 0) {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;

    int used_miski = 0;
    while (sum(miski, used_miski) < (sum(miski, n)/2)) { used_miski++; }

    cout << "Peta: " << n-used_miski << endl;
    for (int i = 0; i < n - used_miski; i++) { cout << miski[used_miski + i] << " "; }
    cout << endl;

    cout << "Masha: " << used_miski << endl;
    for (int i = 0; i < used_miski; i++) { cout << miski[i] << " "; }
    cout << endl;

    return 0;
}