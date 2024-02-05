#include<iostream>
using namespace std;

class test
{
private:
    int x=2, y=2;
public:
    void add (){
        cout<<"The sum is "<<x+y;
    }
};

int main(){
    test t;
    t.add();
    return 0;
}