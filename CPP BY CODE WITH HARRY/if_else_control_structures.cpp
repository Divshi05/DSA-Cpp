#include <iostream>
using namespace std;

int main()
{
    //control structures ---> gives flow and logic to the program
// SELECTION STRUCTURE ---> if else-if else ladder  
//   int a;//age
//     cin>>a;
//  if((a<18)&&a>0)
//  cout<<"not welcomed"<<endl;
// else if((a==18))
// cout<<"bacha hai ";
// else if (a<1)
// cout<<"pehla paida ho";
// else
// cout<<"welcome to the party";
// cout<<"will be printed every time";

//SELECTION---> SWITCH CASE
int age;
cin>>age;
    switch (age)
    {
    case 18: 
        cout<<"You are 18"<<endl;
        break;
    case 22: 
        cout<<"You are 22"<<endl;
        break;
    case 2: 
        cout<<"You are 2"<<endl;
        break;

    default:
    cout<<"No special cases"<<endl;
        break;
    }

    cout<<"Done with switch case";
    return 0;
}

