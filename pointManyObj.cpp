#include<iostream>
using namespace std;

class Point
{
private:
    int x, y;
public:
    Point() {};
    void set(int a, int b) {
        x = a;
        y = b;
    };

    void show() {
        cout<<"x: "<<x<<" y: "<<y<<endl;
    };
};


int main()
{
    // Point p = Point(1 ,2);
    // p.show();
    int size = 5;
    Point* ptr = new Point [size];
    for (int i = 0; i < size; i++)
    {
        int x, y;
        cout<<"enter x:";
        cin>>x;
        cout<<"enter y:";
        cin>>y;
        (ptr+i)->set(x, y);
    }
    for (int i = 0; i < size; i++)
    {
        (ptr+i)->show();
    }
    
    
    return 0;
}