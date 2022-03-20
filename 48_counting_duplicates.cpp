#include <iostream>
using namespace std;


void countingDuplicates(int *arr,int n)
{  
    int last_duplicate = 0;
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]==arr[i+1]){
            int j = i+ 1;
            while(arr[j]==arr[i]) j++;

            cout<<arr[i] << " - "<<j-i<<endl;
            i = j-1;
        }
    }
    
    
    
}
int main()
{
    int a[] = {6,7,8,8,11,12,12,12,14,15,16,16};
    countingDuplicates(a,12);
    
    return 0;
}