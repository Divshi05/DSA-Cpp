
#include <iostream>
using namespace std;

inline int product(int a, int b)
{
    /* INLINE ---> should be used only when jab function ke andr na ke
    barabar kaam ho raha ho.
    2)  Inline should be not used with recursion , swtich . loops, static
    function.
    3) Use inline only for simple program. */
    /* Not recommended to use below lines with inline functions  --->
       // static int c=0; // This executes only once
       // c = c + 1; // Next time this function is run,
         the value of c will be retained i.e c=1 and uske baad dubara
         jab chalega toh c=1+1= 2 ho jayegi value and so on

         4) inline function zaroori nahi compiler hamesha consider kare ,
         he humare program pe depend karta hai ki compiler usse follow
         karega ya nahi.*/

    return a * b;
}

float moneyReceived(int currentMoney, float factor = 1.04)
{/*  1) factor is default argument if no value is written by  user 
then compiler works on this default value only 
2) always write the default value after */
    return currentMoney * factor;
}

// int strlen(const char *p){} //constant argument --> never changes
int main()
{
    int x, y;
    int money = 100000;
    cout << "Enter the value of x and y" << endl;
    cin >> x >> y;
    cout << "The product of x and y is = " << (product(x, y)) << endl;
    cout << "The product of x and y is = " << (product(x, y)) << endl;
    cout << "If you have " << money << " Rs in your bank account, you will recive "
         << moneyReceived(money) << "Rs after 1 year" << endl;
    cout << "For VIP: If you have " << money << " Rs in your bank account, you will recive "
         << moneyReceived(money, 1.1) << " Rs after 1 year";
    // cout << "The product of x and y is = " << (product(x, y))<<endl;
    // cout << "The product of x and y is = " << (product(x, y))<<endl;
    // cout << "The product of x and y is = " << (product(x, y))<<endl;
    // cout << "The product of x and y is = " << (product(x, y))<<endl;
    // cout << "The product of x and y is = " << (product(x, y))<<endl;
    // cout << "The product of x and y is = " << (product(x, y))<<endl;
    // cout << "The product of x and y is = " << (product(x, y))<<endl;
    // cout << "The product of x and y is = " << (product(x, y))<<endl;
    // cout << "The product of x and y is = " << (product(x, y))<<endl;
    // cout << "The product of x and y is = " << (product(x, y))<<endl;

    return 0;
}