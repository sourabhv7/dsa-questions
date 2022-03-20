#include <iostream>
using namespace std;

int oneMissingElement(int *arr, int n)
{

    for (int i = 0; i < n-1; i++)
    {
        if(arr[i] != arr[i+1]-1){
            return arr[i]+1;
        }
    }

    return NULL;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 8, 9};
    cout << "The missing no. in first n natural number is " << oneMissingElement(a, 8);
    return 0;
}