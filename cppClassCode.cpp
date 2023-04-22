#include<iostream>
using namespace std;

class MyCppClass {
    private:
        int a = 7, b, c;
    public:
        int d = 1 , e = 2;
        void myClassMethod(int x, int y);
    
};

void MyCppClass::myClassMethod(int x, int y) {
    cout<<"inside my Class Method"<<a;
}

int main()
{
    cout <<"hello world";
    MyCppClass classObj;
    cout <<"d: "<< classObj.d<<endl;
    classObj.myClassMethod(2, 3);
    return 0;
}