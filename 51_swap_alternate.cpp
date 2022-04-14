#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size){
    for (int i = 0; i < size; i+=2)
    {
        if(i+1 < size){
            swap(arr[i],arr[i+1]);
        }
    }
    
}
void printArray(int arr[], int size){
    cout<<endl;
    for (int i = 0; i < size; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}
int main()
{
    int arrOdd[7] = {1,2,3,4,5,6,7};
    int arrEven[8] = {1,2,3,4,5,6,7,8};
    swapAlternate(arrOdd,7);
    printArray(arrOdd,7);
    swapAlternate(arrEven,8);
    printArray(arrEven,8);
    return 0;
}