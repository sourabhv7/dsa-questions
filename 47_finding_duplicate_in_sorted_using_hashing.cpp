#include <iostream>
using namespace std;


void findDuplicateInSortedArray(int *arr,int n)
{  
    int last_duplicate = 0;
    int low = arr[0];
    int high = arr[n];

    int *H;
    H = new int[high]{0};
    for (int  i = 0; i < n; i++)
    {
        H[arr[i]]++;
    }
    for(int i = low; i < high; i++){
        if(H[i]>1) cout<<i<<endl;
    }
    
}
int main()
{
    int a[] = {6,7,8,8,11,12,12,12,14,15,16,16};
    findDuplicateInSortedArray(a,12);
    
    return 0;
}