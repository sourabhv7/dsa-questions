#include<iostream>
using namespace std;

struct Array {
    int size;
    int A[5];
    int lenght;
};

void Display(struct Array arr){
    for(int i = 0 ; i <arr.lenght; i++)
        cout<<arr.A[i]<<endl;
}

int main()
{
    Array arr = {10,{1,2,3,4,5},5};
    Display(arr);

    return 0;
}