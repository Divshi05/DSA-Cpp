#include <iostream>
using namespace std;

int main()
{
    // Array Example
    int marks[]={23,45,67,98};
    int mathMarks[]={34,56,68,89};
    // int mathMarks[4];
    // mathMarks[0] = 2278;
    // mathMarks[1] = 738;
    // mathMarks[2] = 378;
    // // mathMarks[3] = 578; //can also be written like this

    cout<<"The math marks are"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;
    
    // cout<<"the marks are"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    
// for (int i = 0; i < 4; i++)
//     {
//         cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
//     }

//using while --->
int i=0;
cout<<"marks using while loop"<<endl;
while(i<4)
{
    cout<<marks[i]<<endl;
    i++;
}

//using do while loop --->

 i=0;
cout<<"marks using do-while loop"<<endl;
do
{
    cout<<marks[i]<<endl;
    i++;
}
while(i<4);

//pointers and arrays
int* p=marks;
cout<<*(p)<<endl;
cout<<*(p++)<<endl;
cout<<*(++p);

// cout<<"the value of *(p) is "<<*(p)<<endl;
// cout<<"the value of *(p+1) is "<<*(p+1)<<endl;
// cout<<"the value of *(p+2) is "<<*(p+2)<<endl;
// cout<<"the value of *(p+3) is "<<*(p+3)<<endl;

    return 0;
}