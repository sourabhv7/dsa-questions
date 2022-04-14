#include<iostream>
#include<vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
        int s = arr.size();
        for(int i = 1; i< s-1; i++){
            if(arr[i] > arr[i-1] and arr[i] > arr[i+1])
            return i;
        }
        return 1;
    }



int main()
{
    vector<int> v;
    v = {3,4,5,1};
    int indx = peakIndexInMountainArray(v);
    cout<<indx;
    return 0;
}