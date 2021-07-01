#include <iostream>
using namespace std;

long int bigmod(int a, int b, int m)
{
    if (b == 0) return 1;
    if (b % 2 == 0)
    {
        long int x = bigmod(a, b / 2, m);
        return (x * x) % m;
    }
    else return ((long int)a % m * bigmod(a, b - 1, m)) % m;
}

int main() {
    long int a, b, m;
    while (cin >> a >> b >> m)
        cout << bigmod(a, b, m) << endl;
}