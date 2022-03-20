#include <iostream>
using namespace std;


void left_rotate(int * arr, int length,int rotate){  
    for(int i = 0; i<rotate;i++){
        int temp = arr[0];
        for(int j = 0; j< length-1;j++){
            arr[j] = arr[j+1];
        }
        arr[length-1] = temp;
    }
}


int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    left_rotate(arr,n,2);
    for (int x : arr){
        cout<< x << " ";
    }
    
    return 0;
}