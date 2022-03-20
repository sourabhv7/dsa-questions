#include<iostream>
using namespace std;

int main()
{
    int a[5] = {1,2,3,4,5};
    for (int x:a)   //for each loop in cpp
    cout<<x<<endl;

    cout<<sizeof(a)<<" bytes";
    return 0;
}