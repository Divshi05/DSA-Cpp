#include <iostream>
using namespace std;

int main()
{
    // for (int i = 0; i < 40; i++)
    // {
    //     /* code */
    //     if(i==2){
    //         break;
    //     }
    //     cout<<i<<endl;
    // }
    for (int i = 0; i < 10; i++)
    {
        /* code */
        if(i==2){
            continue;
        }
        else if(i==6)
        {
            break;
        }
        cout<<i<<endl;
    }
    return 0;
}