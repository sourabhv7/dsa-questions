#include<iostream>
using namespace std;

int * mergingArrays(int *arr1,int lOf1,int *arr2,int lOf2){
    int i ,j,k;
    i = j = k = 0;
    int *c ;
    c = new int[lOf1 + lOf2];

    while(i < lOf1 && j < lOf2){
        if(arr1[i] < arr2[j] ){
            c[k++] = arr1[i++];
        }
        else{
            c[k++] = arr2[j++];
        }
    }
    for (; i < lOf1; i++)
    {
        c[k++] = arr1[i];
    }
    for (; j < lOf2; j++)
    {
        c[k++] = arr2[j];
    }
    
    return c;

}


int main()
{
    int a[] = {3,8,16,20,25};
    int b[] = {4,10,12,22,23};
    int s1 = 5, s2 = 5;
    int *c ;
    c = mergingArrays(a, s1, b, s2);
    for(int i = 0; i< s1+s2; i++){
        cout<<c[i]<<" ";
    }
    
    return 0;
}