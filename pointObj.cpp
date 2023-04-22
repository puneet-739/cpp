#include<iostream>
#include<math.h>
using namespace std;

class Point
{
private:
    int x, y;
public:
    friend double distance(Point, Point);
    Point(int a, int b);
    void showPoint(void) {
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
    
};
 Point:: Point(int a, int b)
{
    x = a;
    y = b;
}

double distance(Point a, Point b) {
    return sqrt((b.y - a.y)*(b.y - a.y) + (b.x - a.x)*(b.x - a.x)); 
}




int main()
{
    Point A(1, 2), B(4, 5);
    A.showPoint();
    B.showPoint();

    cout<<"Distance b/w A & B is: "<<distance(A, B)<<endl;
    return 0;
}