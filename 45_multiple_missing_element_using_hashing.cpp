#include <iostream>
using namespace std;


int getMax(int *arr, int l ){
    int max = 0;
    for(int i = 0 ; i < l ; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<"max is "<< max<<endl;
    return max;
}
int getLow(int *arr, int l ){
    int low = arr[0];
    for(int i = 0; i < l ; i++){
        if(arr[i]<low){
            low = arr[i];
        }
    }
    cout<<"low is "<< low<<endl;
    return low;
}

void multipleMissingElement(int *arr,int n)
{  
    int low = getLow(arr,n);
    int max = getMax(arr,n);
    int diff = low-0;
    int *H;
    H = new int[max]{0};
    for (int i = 0; i < n; i++)
    {
        H[arr[i]]++;
    }
    for (int j = low;j < max; j++){
        if (H[j]==0)
        {
            cout<<j<<endl;
        }
        
    }
    
}
int main()
{
    int a[] = {6,7,8,11,12,14};
    multipleMissingElement(a,6);
    return 0;
}