#include<iostream>
using namespace std;

class Complex {
    int a;
    int b;
    friend class SumClass;
    friend Complex sum(Complex c1, Complex c2);
    public:

        void set(int n1, int n2) {
            a = n1;
            b = n2;
        }
        void show() {
            cout<<a<<"+"<<b<<"i"<<endl;
        }
};

class SumClass {
    public:
        int realSum(Complex c1, Complex c2) {
            return c1.a + c2.a;
        }
        int complexPartSum(Complex c1, Complex c2) {
            return c1.b + c2.b;
        }

};

Complex sum(Complex c1, Complex c2) {
    Complex c3;
    c3.a = (c1.a + c2.a);
    c3.b = (c1.b + c2.b);
    return c3;
}

int main()
{
    cout<<"MyFriendFunction"<<endl;
    Complex c1, c2, c3;
    c1.set(2, 1);
    c1.show();
    c2.set(5, 7);
    c2.show();
    c3 = sum(c1, c2);
    c3.show();

    SumClass s;
    cout<<s.realSum(c1, c2)<<endl;
    cout<<s.complexPartSum(c1, c2)<<endl;
    
    return 0;
}