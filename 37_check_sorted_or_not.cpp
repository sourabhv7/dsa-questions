#include <iostream>
using namespace std;

bool isSorted(int *arr, int length){
    for (int i = 0; i < length-1; i++)
    {
        if(arr[i] > arr[i+1]){
            return false;
        }
    }
    
    return true;
    
}

int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 6, 5};
    cout<<isSorted(arr,n);
    
    
    return 0;
}