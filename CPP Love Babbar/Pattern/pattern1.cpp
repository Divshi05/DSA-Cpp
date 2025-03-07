#include <iostream>
using namespace std;

/*
****
****
****
****
*/
int main()
{
    int  j = 4, k = 1;
    while (k <= 4)
    {
        int i=1;
        while (i <= j)
        {
            cout << "*";
            i++;
        }
        cout<<endl;
        k=k+1;
    }
    return 0;
}