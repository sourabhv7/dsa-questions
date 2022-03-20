#include<iostream>
using namespace std;


void insert(int *arr,int *length,int index,int value){
    for (int i = *length;i>index;i--){
        arr[i] = arr[i-1];
    }
    arr[index] = value;
    length ++;
}

int main()
{
    int size = 10;
    int length = 5;
    int arr[size] = {2,4,6,8,10};
    insert(arr,&length,2,5);
    for (int x:arr){
        cout<<x<<endl;
    }
    cout<<endl<<length;


    return 0;
}