#include <iostream>
using namespace std;
class Y;
class X{
    int data;
public:
friend void add(X o1, Y o2);
void setdata(int value){
    data=value;
    
}
};

class Y{
    int data2;
public:
friend void add(X o1, Y o2);
void setdata(int value){
    data2=value;
    

}
};

void add (X o1, Y o2){
   int sumup =   ( o1.data + o2.data2);
   cout<< sumup;
}
int main()
{
    X c1;
    Y c2;
    c1.setdata(5);
    c2.setdata(10);
    int sum;
    add(c1 , c2);
    return 0;
}