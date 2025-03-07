#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setData(void)
    {
        salary = 130;
        cout << "Enter id of employee" << endl;
        cin >> id;
    }

    void getData(void)
    {
        cout << "The id of the employee is " << id << endl;
    }
};
int main()
{
    // Employee harry, rohan, lovish, shruti;
    // harry.setId();
    // harry.getId();
    
    Employee google[4];
    for (size_t i = 0; i < 4; i++)
    {
        google[i].setData();
        google[i].getData();
    }

    return 0;
}