#include<iostream>
using namespace std;

typedef struct data
{       
    int id;
    char c;
} Data;

typedef union strUni
{
    int id;
    char c;
    float f;
} uni;

int myVar = 200; 
int main()
{
    enum myEnum {mon, tue, wed, thu, fri, sat, sun};
    cout<<mon<<endl;
    Data d, obj;
    d.id = 1;
    d.c = 'c';
    obj.c = 'o';
    obj.id = 7;
    cout<<"id is: "<<d.id<<" and char is: "<<d.c<<endl; 
    cout<<"obj id is: "<<obj.id<<" and obj char is: "<<obj.c<<endl; 

    uni myObj;
    myObj.id = 123;
    myObj.c = 'a';
    myObj.f = 1.2;
    cout<<"myObj info is:id "<<myObj.id<<endl;
    // cout<<"myObj info is:c "<<myObj.c<<endl;
    cout<<"myObj info is:f "<<myObj.f<<endl;

    int myVar = 2;
    cout<<"my var is: "<<::myVar<<endl;
    return 0;
}