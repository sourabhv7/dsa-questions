#include<iostream>
using namespace std;

int main()
{int n = 12;
    int arr[] = {1,3,4,4,1,1,4,5,4,1,2};
    for (int i = 0;i<n;i++){
        int count=0;
        for(int j = 1;j<n;j++){
            if (arr[i]==arr[j]){
                count++;
            }
        }
        if (count==n/2);{
            cout<<arr[i]<<endl;
        // break;

        } 
    }
    return 0;
}