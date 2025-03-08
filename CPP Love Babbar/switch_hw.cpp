#include <iostream>
using namespace std;

int main()
{
    int price;
    cin >> price;
    int count;
    int newprice;

   switch (100){
case 100:if (price>=100){
count = price/100;
price= price%100;
cout<<"No. of 100 notes that will be used = "<< count << endl;
}

case 50: if (price>=50){
count = price/50;
price= price%50;
cout<<"No. of 50 notes that will be used = "<< count << endl;
}

case 20: if (price>=20){
count = price/20;
price= price%20;
cout<<"No. of 20 notes that will be used = "<< count << endl;
}

case 1: if (price>=1){
count = price/1;
price= price%1;
cout<<"No. of 1 notes that will be used = "<< count << endl;
}


default: break;
    }


    return 0;
}