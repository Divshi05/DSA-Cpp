#include <iostream>

using namespace std;

int c = 50; // global variable
int main()

{
    //***********BUILD IN DATA TYPES************
    //     int a, b , c;
    //     cout << "Enter the value of a and b" << endl;
    //     cin >> a >> b;
    //      c = a + b; // local variable
    //     cout << "local variable c is :" << c << endl;
    //  cout << "global variable c is : " << ::c;
    // :: ---> scope resolution operator





//*********** Float , double and long double LITERALS************
//  float d = 34.6f;
//  long double e = 34.6l;
//  /*writing f or l after the value tells if its in float or double */
//  cout << "value of d is " << d << endl<< "value of e is" << e <<endl;
//  cout<<"The size of 34.6 is "<< sizeof(34.6)<<endl;
//  cout<<"The size of 34.6f is "<< sizeof(34.6f)<<endl;
//  cout<<"The size of 34.6F is "<< sizeof(34.6F)<<endl;
//  cout<<"The size of 34.6l is "<< sizeof(34.6l)<<endl;
//  cout<<"The size of 34.6L is "<< sizeof(34.6L)<<endl;
    




    
//*********** REFERENCE VARIABLES************
// Rohan Das ---> Monty ---> Rohu ---> AwesomeCricketer
    // float x=469;
    // float &y=x;
    // cout << x <<endl;
    // cout << y <<endl;





  //*********** TYPECASTING************  
  // CONVERTING ONE DATA TYPE TO ANOTHER DATA TYPE
  int p = 45; float q = 46.45;
  cout<< " The value of p is " <<(float)p <<endl;
  cout << "The value of p is " <<float (p) <<endl;

  cout << "the value of q is "<<(int)q <<endl;
  cout<<"the value of q is "<< int (q) <<endl;

cout <<"the expression gives "<<p+q<<endl;
cout << "the expression gives"<<p+int(q)<<endl;
      return 0;
}
