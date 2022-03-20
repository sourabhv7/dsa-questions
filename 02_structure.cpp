#include<iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
    char a;   //compiler take 4 bythes for this not 1 byte.
};

// struct rectangle
// {
//     int length;
//     int breadth;
// }r,r1,r2,r3;    //will be global struct variable


int main()
{
    struct rectangle r;     //declaration
    r = {10,15};     // initialization
    // struct rectangle r = {10,15};     //declaration + initialization
    
    // struct rectangle r[10];     // Array of structure

    // r.breadth = 10;
    // r.length = 20;
    cout<<r.breadth<<endl;
    cout<<r.length<<endl;
    cout<<sizeof(r);
    return 0;
}