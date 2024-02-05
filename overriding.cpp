#include<iostream>
using namespace std;

class Parent
{
public:
    void SCHOOL_Print()
    {
        cout << "Base Function" << endl;
    }
};

class Child : public Parent 
{
public:
    void SCHOOL_Print()
    {
        cout << "Derived Function" << endl;
    }
};

int main()
{
    Child Child_Derived;
    Child_Derived.SCHOOL_Print();
    return 0;
}