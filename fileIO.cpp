#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // string st = "this is a sample string hahaha.";
    // ofstream write("demo.txt");
    // write<<st;
    // write.close();

    string str = "";
    ifstream read("demo.txt");
    string s;
    do
    {
        read>>s;
        str += (s + " ");
    } while (s != ".");
    read.close();
    cout<<str;
    return 0;
}