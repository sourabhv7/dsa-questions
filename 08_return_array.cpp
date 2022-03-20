#include<iostream>
using namespace std;

int * getarray(int size){
    int *ptr;
    ptr = new int[size];
    for(int i = 0; i<size; i++){
    ptr[i] = i+2;
    }

    return ptr;
}
int main()
{
    int size = 5;
    int *p;
    p = getarray(size);
    for (int i = 0; i< size; i++){
    cout<<p[i]<<endl;
    }


    return 0;
}