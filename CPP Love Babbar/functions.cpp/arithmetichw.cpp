#include <iostream>
using namespace std;

int arith(int a1, int n1, int d1)
{
    int result = a1 + ((n1 - 1) * d1);
    return result;
}
int main()
{
    int a, n, d;
    cin >> a >> n >> d;
    int ans = arith(a, n, d);
    cout << ans;
    return 0;
}