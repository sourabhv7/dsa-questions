#include <iostream>
using namespace std;

void insert(int *arr, int length,int n) 
{
    int i = length-1;
    while (arr[i] > n)
    {
        arr[i+1] = arr[i];
        // cout<<arr[i+1]<<endl;
        i--;
    }
    arr[i+1] = n;
}


int main()
{
    int n = 10;
    int arr[n] = {1, 2, 3, 4, 6,9};
    insert(arr,6,5);
    for (int x : arr){
        cout<< x << " ";
    }
    
    return 0;
}