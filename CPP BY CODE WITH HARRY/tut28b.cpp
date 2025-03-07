#include <iostream>
using namespace std;

class num2;

class num1
{
    int a;
friend void swap(num1 &, num2 &);
public:
    void setdata(int val1)
    {
        a = val1;
    }
    void display(void){
        cout<<"Value of a is "<< a << endl;
    }
};

class num2
{
    int b;
friend void swap(num1 &, num2 &);
public:
    void setdata(int val2)
    {
        b = val2;
    }
void display(void){
    cout<<"Value of b is "<< b << endl;
}
};

void swap(num1 &x, num2 &y)
{
    int temp = x.a;
    x.a = y.b ;
    y.b = temp;
}
int main()
{
    num1 x1;
    num2 y1;
    x1.setdata(67);
    y1.setdata(34);
    swap(x1, y1);
    x1.display();
    y1.display();
    return 0;
}