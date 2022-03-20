#include <iostream>
using namespace std;

int *unionOfArrays1(int *arr1, int lOf1, int *arr2, int lOf2)
{ // for sorted arrays;
    int *c;
    int lOfC = lOf1+lOf2;
    c = new int[lOfC];
    int i, j, k;
    i = j = k = 0;
    while (i < lOf1 && j < lOf2)
    {
        if (arr1[i] < arr2[j])
            c[k++] = arr1[i++];
        else if (arr2[j] < arr1[i])
            c[k++] = arr2[j++];
        else
        {
            c[k++] = arr1[i++];
            j++;
            lOfC--;
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
    cout<<lOfC<<endl;
    return c;
}

int main()
{
    int a[] = {3, 8, 16, 20, 25};
    int b[] = {4, 10, 12, 20, 23};
    int s1 = 5, s2 = 5;
    int *c;
    c = unionOfArrays1(a, s1, b, s2);
    for (int i = 0; i < s1 + s2; i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}