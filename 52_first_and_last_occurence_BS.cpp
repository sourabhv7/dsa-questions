// Solved in code studio
// https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549

#include<iostream>
#include<vector>
using namespace std;

int firstOccurence(vector<int> arr, int n , int k){
    int s = 0, e = n-1;
    int mid = s+ (e-s)/2;
    int ans = -1;
    while(s <= e){
        if(arr[mid]==k){
            ans = mid;
            e = mid-1;
        }
        else if (arr[mid]< k)
        {
            s = mid +1;
        }
        else if (arr[mid]> k)
        {
            e = mid -1;
        }
        mid = s+ (e-s)/2;
    }
    return ans;
}

int lastOccurence(vector<int> arr, int n , int k){
    int s = 0, e = n-1;
    // int mid = (s + e)/2;
    int mid = s+ (e-s)/2;
    int ans = -1;
    while(s <= e){
        if(arr[mid]==k){
            ans = mid;
            s = mid+1;
        }
        else if (arr[mid]< k)
        {
            s = mid +1;
        }
        else if (arr[mid]> k)
        {
            e = mid -1;
        }
        mid = s+ (e-s)/2;
    }
    return ans;
}

pair<int,int> firstAndLastOccurrence(vector<int> &arr,int n , int k){
    pair<int,int> p;
    p.first = firstOccurence(arr, n , k);
    p.second = lastOccurence(arr, n , k);
    return p;
}
    


int main()
{
    vector<int> v;
    v = {0,1,3,3,3,3,5,5,6};
    pair<int,int> p = firstAndLastOccurrence(v, 9, 6);
    
    cout<<p.first<<endl;
    cout<<p.second<<endl;
    return 0;
}