#include <iostream>
using namespace std;


void findDuplicateInSortedArray(int *arr,int n)
{  
    int last_duplicate = 0;
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]==arr[i+1] and arr[i]!=last_duplicate){
            cout<<arr[i]<<endl;
            last_duplicate = arr[i];
        }
    }
    
    
    
}
int main()
{
    int a[] = {6,7,8,8,11,12,12,12,14,15,16,16};
    findDuplicateInSortedArray(a,12);
    
    return 0;
}