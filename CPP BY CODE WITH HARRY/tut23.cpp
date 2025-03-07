#include <iostream>
using namespace std;

class shop
{
    int ItemId[100];
    int ItemPrice[100];
    int counter =0;

public:
    void setprice(void);
    void Displayprice(void);
};

void shop ::setprice(void)
{
    cout << "Enter ItemId "<<endl;
    cin >> ItemId[counter];
    cout << "Enter Item price "<<endl;
    cin >> ItemPrice[counter];
    counter++;
    
}

void shop ::Displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The item id is " << ItemId[i]<<endl;
        cout << "The item price is " << ItemPrice[i] <<endl;
    }
}
int main()
{
    shop dukaan;
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.Displayprice();
    return 0;
}



// #include <iostream>
// using namespace std;

// class Shop
// {
//     int itemId[100];
//     int itemPrice[100];
//     int counter;

// public:
//     void initCounter(void) { counter = 0; }
//     void setPrice(void);
//     void displayPrice(void);
// };

// void Shop ::setPrice(void)
// {
//     cout << "Enter Id of your item no " << counter + 1 << endl;
//     cin >> itemId[counter];
//     cout << "Enter Price of your item" << endl;
//     cin >> itemPrice[counter];
//     counter++;
// }

// void Shop ::displayPrice(void)
// {
//     for (int i = 0; i < counter; i++)
//     {
//         cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
//     }
// }

// int main()
// {
//     Shop dukaan;
//     dukaan.initCounter();
//     dukaan.setPrice();
//     dukaan.setPrice();
//     dukaan.setPrice();
//     dukaan.displayPrice();
//     return 0;
// }
