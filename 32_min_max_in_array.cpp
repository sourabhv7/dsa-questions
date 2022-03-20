#include<iostream>
using namespace std;

int max(int *arr, int length){
    int max = arr[0];
    for(int i = 1; i<length; i++){
        if(arr[i]> max) max = arr[i];
    }
    return max;
}

int min(int *arr, int length){
    int min = arr[0];
    for(int i = 1; i<length; i++){
        if(arr[i] < min) min = arr[i];
    }
    return min;
}




int main()
{
    int arr[] = {1,2,66,4,-5};
    int length = 5;
    cout<<max(arr, length)<<endl;
    cout<<min(arr, length);
    return 0;
}