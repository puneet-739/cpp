#include<iostream>
using namespace std;

class Test
{
private:
    int a, b;
public:
    Test(int x, int y): a(x), b(y) {
        cout<<"value of a: "<<a<<endl<<"value of b: "<<b<<endl;
    }
  
};


int main()
{
    // Test test(2,3);
    int n, count = 0;
    cout<<"Enter n: ";
    cin>>n;
    while (n != 1)
    {
        count++;
        if(n % 2 == 0) {
            n = n/2;
            cout<<n<<endl;
        } 
        else {
            n = 3 * n + 1;
            cout<<n<<endl;
        }
    }
    cout<<"count :"<<count<<endl;
    
    return 0;
}