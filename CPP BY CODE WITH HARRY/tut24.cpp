#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setback(void)
    {
        cout << "Enter the value of id" << endl;
        cin >> id;
        count++;
    }
    void getback(void)
    {
        cout << "The id of the employee is " << id << " and the employee number is "
             << count << endl;
    }

    static void getcount(void)
    {
        // only used for static variables
        // cout<<id; // throws an error
        cout << "The value of count is " << count << endl;
    }
};

// Count is the static data member of class Employee
int Employee ::count; // the default value of static member is zero

int main()
{
    Employee divya, harry, vince;

    // harry.id = 1;
    // harry.count=1; // cannot do this as id and count are private

    divya.setback();
    divya.getback();
    Employee::getcount();

    harry.setback();
    harry.getback();
    Employee::getcount();

    vince.setback();
    vince.getback();
    Employee::getcount();

    return 0;
}