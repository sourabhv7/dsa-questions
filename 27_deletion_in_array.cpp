#include<iostream>
using namespace std;


void deletion(int *arr,int *length,int index){
    for (int i = index; i < *length; i++){
        arr[i] = arr[i+1];
    }
    *length--;
    
}

int main()
{
    int size = 10;
    int length = 5;
    int arr[size] = {2,4,6,8,10};
    deletion(arr, &length,3);
    for (int x:arr){
        cout<<x<<endl;
    }
    cout<<length;


    return 0;
}