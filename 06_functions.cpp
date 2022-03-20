#include<iostream>
using namespace std;
// pass by value
int add(int x, int y){
    int sum = x + y;
    return sum;
}
// pass by address pointer
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

// pass by refrence ---- refrence means alias name of a variable.
void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 5 , b = 10;
    // pass by value
    int sum = add(a,b);
    cout<<"Sum of a and b is "<<sum<<endl;

    // pass by address
    swap(&a, &b);
    cout<<"a = "<<a<<" b = "<<b<<endl;

    // pass by refrence
    swap(a,b);
    cout<<"a = "<<a<<" b = "<<b<<endl;

    return 0;
}