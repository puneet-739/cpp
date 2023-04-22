#include<iostream>
using namespace std;

class BaseClass
{
public:
    int i = 0;
    virtual void show() {
        cout<<"inside base class value of i is "<<i<<endl;
    }
};

class DerivedClass : public BaseClass {
    public:
        int i = 1;
        void show() {
            cout<<"inside derived class value of i is "<<i<<endl;
        }
};

int main()
{
    // BaseClass* bptr;
    // BaseClass base;
    // bptr = &base;
    // bptr->show();

    // DerivedClass* dptr;
    // DerivedClass derived;
    // dptr = &derived;
    // dptr->show();

    BaseClass* bptr;
    DerivedClass derived;
    bptr = &derived;
    bptr->show();
    return 0;
}