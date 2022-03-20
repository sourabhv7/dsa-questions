#include <iostream>
using namespace std;

int oneMissingElement(int *arr,int n)
{  int high = arr[n-1]; 
   int sum = 0;
   for (int i = 0; i < n ; i++){
       sum += arr[i];
   }
//    cout<<sum<<endl;
   int s = (high*(high+1))/2;
//    cout<<s<<endl;
   return s - sum;
    
}
int main()
{
    int a[] = {1,2,3,4,5,6,8,9};
    cout<<"The missing no. in first n natural number is "<<oneMissingElement(a,8);
    return 0;
}