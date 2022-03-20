#include <iostream>
using namespace std;

void multipleMissingElement(int *arr,int n)
{  
    int low = arr[0];

    int diff = low-0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i]-i != diff){
            while(diff<arr[i]-i){
                cout<< i + diff<<endl;
                diff++;
            }
        }
    }
    
}
int main()
{
    int a[] = {6,7,8,11,12,14};
    multipleMissingElement(a,6);
    return 0;
}