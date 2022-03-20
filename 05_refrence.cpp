#include<iostream>
using namespace std;

// refrence is just an Alias name (other name of a variable)
int main()
{
    int a = 10;
    int &r = a;
    cout<<r<<endl;
    cout<<a<<endl;
    r++;
    cout<<a;

    return 0;
}