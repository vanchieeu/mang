#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int *a = new int[n];
    cin >> a[0];

    int tong = a[0], sochan = 0, max = a[0];
    if (a[0] % 2 == 0)
        sochan++;

    for (int i = 1; i < n; i++) {
        cin >> a[i];

        tong += a[i];

        if (a[i] % 2 == 0)
            sochan++;

        if (a[i] > 0)
            max = a[i];
    }


    if (max < 0)
        max = 0;

    cout << tong << " " << sochan << " " << max;
    return 0;
}