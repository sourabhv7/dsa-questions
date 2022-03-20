#include <iostream>
using namespace std;

void reverse_method_1(int *arr, int length) //by uding the other array
{
    int *B = new int[length];
   
    int i = length - 1;
    int j = 0;
    for (; i >= 0; i--)
    {
        B[j] = arr[i];
        j++;
    }
    for (int i = 0; i < length; i++)
    {
        arr[i] = B[i];
    }
    delete [ ] B;
    
}

void reverse_method_2(int * arr, int length){  //by swapping elemnts
    int i = 0;
    int j = length-1;
    int temp;
    for (; i < j; i++)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
    }
}


int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    reverse_method_1(arr,n);
    for (int x : arr){
        cout<< x << " ";
    }
    reverse_method_2(arr,n);
    cout<<endl;
    for (int x : arr){
        cout<< x << " ";
    }
    return 0;
}