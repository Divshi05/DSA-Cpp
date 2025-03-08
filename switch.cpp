#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    switch (num)
    {
    case 1:
        while (num <= 5)
        {
            if (num == 3)
            {
                num++;
                continue;
            }

            cout << num << endl;
            num++;
        }
    }

    return 0;
}


