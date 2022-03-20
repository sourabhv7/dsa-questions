#include<iostream>
using namespace std;


int RbinSearch(int *arr,int l,int h,int value){
    if (l<h){
        int m = (l+h)/2;

        if(arr[m]==value){
            return m;
        }
        else if(arr[m]<value){
            return RbinSearch(arr,m+1,h,value);
        }
        else{
            return RbinSearch(arr,l,m-1,value);
        }
    }
    return -1;
}

int main()
{
    int size = 10;
    int length = 5;
    int arr[size] = {2,4,6,8,11};
    cout<<RbinSearch(arr,0,length-1,6);


    return 0;
}