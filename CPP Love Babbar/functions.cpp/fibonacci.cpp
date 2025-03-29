#include <iostream>
using namespace std;

int fibonacci(int x)
{
    int a = 0, b = 1, c;
    if (x == 2)
    {
        return b;
    }
    if (x == 1)
    {
        return a;
    }
    else
    {

        for (int i = 3; i <= x; i++)
        {
            c = a + b;
            a=b;
            b = c;
        }
        return c;
    }
}
int main()
{
    int n;
    cin >> n;
    int ans = fibonacci(n);
    cout << ans;
    return 0;
}