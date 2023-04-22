#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream writeName;
    writeName.open("namefile.txt");
    string name;
    cout<<"Enter your Name :";
    cin>>name;
    writeName<<name;
    // writeName<<"this is a demo text.";
    writeName.close();
    return 0;
}