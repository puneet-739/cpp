#include<iostream>
using namespace std;

void arrayPrinter(int* arr) {
    for(int i=0; i<5; i++) {
        cout<<"Address: "<<(arr+i)<<" value: "<<*(arr+i)<<endl;
    }
}

int main()
{
    int i = 3, k = 20;
    int &j = i;
    j = 8;
    int* addressI = &i;
    int* addressJ = &j;
    int* addressK = &k;
    int** addAddI = &addressI;
    // cout<<i<<endl;
    // cout<<j<<endl;
    // cout<<"address of i is: "<<addressI<<endl;
    // cout<<"address of j is: "<<addressJ<<endl;
    // cout<<"address of j is: "<<addressK<<endl;
    // cout<<"value of i is: "<<*addressI<<endl;
    // cout<<"value of j is: "<<*addressJ<<endl;
    // cout<<"value of k is: "<<*addressK<<endl;
    // cout<<"address of addressI is: "<<addAddI <<endl;

    int value[] = {1,2,3,4,5};
    arrayPrinter(value);


    return 0;
}