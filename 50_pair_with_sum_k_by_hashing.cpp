#include<iostream>
using namespace std;

void findPair(int * arr, int n, int k  ){
    int *H = new int[n]{0};
    for (int i = 0; i < n; i++)
    {
        if (H[k-arr[i]] != 0)
        {
            cout<<arr[i]<< "+"<<k-arr[i]<<"="<<k<<endl;
        }
        
    }
    

}


int main()
{
    int a[] = {6,7,8,11,12,14};
    findPair(a,6,20);
    return 0;
}