#include<iostream>
using namespace std;


void append(int *arr,int *length,int value){
    arr[*length] = value;
    length ++;
}

int main()
{
    int size = 10;
    int length = 5;
    int arr[size] = {2,4,6,8,10};
    if (length<size)
        append(arr,&length,12);
    for (int x:arr){
        cout<<x<<endl;
    }


    return 0;
}