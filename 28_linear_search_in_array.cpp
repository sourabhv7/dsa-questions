#include<iostream>
using namespace std;


int linSearch(int *arr,int length,int value){
    for(int i = 0; i<length; i++){
        if(arr[i]==value) return i;
    }
    return -1;

}

int main()
{
    int size = 10;
    int length = 5;
    int arr[size] = {2,4,6,8,10};
    cout<<linSearch(arr,length,6);
    return 0;
}