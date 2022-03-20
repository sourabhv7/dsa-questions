#include<iostream>
using namespace std;


int binSearch(int *arr,int length,int value){
    int l = 0;
    int h = length-1;
    while(l<h){
        int m = (l+h)/2;

        if(arr[m]==value){
            return m;
        }
        else if(arr[m]<value){
            l = m+1;
        }
        else{
            h = m-1;
        }
    }
    return -1;
}

int main()
{
    int size = 10;
    int length = 5;
    int arr[size] = {2,4,6,8,11};
    cout<<binSearch(arr,length,2);


    return 0;
}