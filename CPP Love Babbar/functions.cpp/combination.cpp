#include <iostream>
using namespace std;

int factorial(int num)
{

    if ((num == 0) || (num == 1))
    {
        return 1;
    }
    else
    {
        return ((num) * factorial(num - 1));
    }
}

int comb(int n1, int r1){
    int ans = (factorial(n1))/(factorial(r1)*(factorial(n1-r1)));
    return ans;
}
int main()
{
    int n, r;
    cin >> n >> r;
    int result = comb(n, r);
    cout<< result<< endl;
    return 0;
}