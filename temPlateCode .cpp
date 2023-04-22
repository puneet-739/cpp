#include<iostream>
using namespace std;

// THIS IS A FUNCTION USING TEMPLATE.
template <class T>
T addSome(T x, T y) {
    return x + y;
}

// THIS IS A CLASS USING TEMPLATE.
template <class T1, class T2> 
class myClass
{
private:
    T1 data1;
    T2 data2;
public:
    myClass(T1 x, T2 y) {
        data1 = x;
        data2 = y;
    }
    void display() {
        cout<<"x: "<<data1<<" & "<<"y: "<<data2<<endl;
    }
};


int main()
{
    cout<<addSome<int>(1, 2)<<endl;    
    cout<<addSome<float>(1.2, 2.4)<<endl;    
    cout<<addSome<string>("Ram", " Nagar")<<endl;    

    myClass<int, float> obj1(1, 2);
    myClass<float, char> obj2(1.3, 'p');
    myClass<char, string> obj3('x', "honey");
    // myClass<char, myClass<char, string>> obj4('x', obj3);
    obj1.display();
    obj2.display();
    obj3.display();
    // obj4.display();
    return 0;
}