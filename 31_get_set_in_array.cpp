#include <iostream>
using namespace std;

int get(int *arr, int length, int index)
{
    if (index >= 0 and index < length)
    {
        return arr[index];
    }
    return NULL;
}

void set(int *arr, int length, int index, int value)
{
    if (index >= 0 and index < length)
    {
        arr[index] = value;
    }
}

void Display(int *arr, int length)
{
    for (int i = 0; i < length; i++)
        cout << arr[i] << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int length = 5;
    cout << get(arr, length, 6);

    return 0;
}