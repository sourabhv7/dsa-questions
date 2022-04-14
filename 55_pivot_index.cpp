#include<iostream>
#include<vector>
using namespace std;

int pivotIndex(vector<int>& nums){
    int n = nums.size();
    int leftSum;
    int rightSum;
    for(int i = 0; i < n ; i++){
        leftSum = 0;
        rightSum = 0;
        for(int j = 0 ; j < i; j++){
            leftSum += nums[j];
        }
        for(int k = i+1; k < n ; k++){
            rightSum += nums[k];
        }
        if (leftSum == rightSum){
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> v ;
    v = {2,1,-1};
    int pivotindex = pivotIndex(v);
    cout<<pivotindex;
    return 0;
}