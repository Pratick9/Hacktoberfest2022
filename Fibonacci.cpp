
// Given t test cases. Find fibonacci number at x index using precomputation
// Constraints:
// 1 <= t <= 10^5
//  1 <= a[i] <= 10^7

#include <iostream>
using namespace std;
const int m = 1e7 + 10;
int fibo[m];

int main()
{
    fibo[0] = fibo[1] = 1;
    for (int i = 2; i < m; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;
        cout << fibo[x - 1] << endl;
    }

    return 0;
}