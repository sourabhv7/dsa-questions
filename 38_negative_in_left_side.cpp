#include <iostream>
using namespace std;

void negative_on_left(int *arr, int length) 
{
    int i = 0;
    int j = length-1;
    int temp;
    while (i<j)
    {
        while(arr[i]<0) {i++;}
        while (arr[j]>=0){j--;}
        if (i<j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
          
    }
    
}
int main()
{
    int n = 10;
    int arr[n] = {-6,3,-8,10,5,-7,-9,12,-4,2};
    negative_on_left(arr,n);
    for (int x : arr){
        cout<< x << " ";
    }
    
    return 0;
}