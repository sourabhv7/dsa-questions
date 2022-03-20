#include<iostream>
using namespace std;
// array will passs by address only , not by value.
void changevalue(int arr[]){
    arr[0] = 0;
}
int main()
{
    int a[5] = {1,2,3,4,5};
    changevalue(a);
    for(int x:a)
    cout<<x<<endl;
    return 0;
}