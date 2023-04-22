#include<iostream>
using namespace std;

class MyClass
{
private:
    int x;
public:
    MyClass() {};
    MyClass(int a);
    MyClass(MyClass &obj) {
        cout<<"inside copy constructor"<<endl;
          x = obj.x;
    }
    void display() {
        cout<<"value is :"<<x<<endl;
    }
};

MyClass::MyClass(int a)
{
    x = a;
}

int main()
{
    MyClass obj1(78);
    MyClass obj2(obj1);

    obj1.display();
    obj2.display();
    return 0;
}