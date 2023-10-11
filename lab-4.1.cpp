#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int k, N, i;
    double S;
    cout << "k = "; cin >> k;
    cout << "N = "; cin >> N;

    // while
    S = 0;
    i = k;
        while (i <= N)
    {
        S += (1.*i * 1.*i) / (k * k + N * N);
        i++;
    }
    cout << S << endl;

    // do while
    S = 0;
    i = k;
    do
    {
        S += (1.*i * 1.*i) / (k * k + N * N);
        i++;
    } while (i <= N);
    cout << S << endl;

    // for ++
    S = 0;
    for (i = k; i <= N; i++)
    {
        S += (1.*i * 1.*i) / (k * k + N * N);
    }
    cout << S << endl;

    // for --
    S = 0;
    for (i = N; i >= k; i--)
    {
        S += (1.*i * 1.*i) / (k * k + N * N);
    }
    cout << S << endl;

    return 0;
}