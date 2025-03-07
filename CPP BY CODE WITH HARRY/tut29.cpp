#include <iostream>
using namespace std;

class complex{
int a , b;
public:
// Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    //It is used to initialize the objects of its class
    //It is automatically invoked whenever an object is created

complex(void); // constructor declaration
void printdata(void){
    cout<< "The complex number is "<< a <<"+"<< b<< "i"<< endl;
}
};

complex :: complex (void)
// ----> This is a default constructor as it takes no parameters
{
    a=10;
    b=12;
    cout<< "This is the first program of constructor"<< endl;
}
int main()
{
    complex c1, c2 , c3;
    c1.printdata();
    c2.printdata();
    c3.printdata();

    return 0;
}

/*       Important Characteristics of Constructors in C++

1) A constructor should be declared in the public section of the class.
2) They are automatically invoked whenever the object is created.
3) They cannot return values and do not have return types.
4) It can have default arguments.
5) We cannot refer to their address.           */