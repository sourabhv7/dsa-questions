#include <iostream>
using namespace std;

int sum(int *arr, int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
    }
    return sum;
}

float average(int * arr, int length){
    return float(sum(arr, length)/length);
}

int main()
{
    int arr[] = {1, 2, 66, 4, -5};
    int length = 5;
    cout << sum(arr, length) << endl;
    cout << average(arr, length) << endl;

    return 0;
}