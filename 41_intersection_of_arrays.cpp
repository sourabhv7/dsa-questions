#include <iostream>
using namespace std;

int *intersectionOfArrays1(int *arr1, int lOf1, int *arr2, int lOf2,int *lenOfNewArray)
{ // for sorted arrays;
    int *c;
    int lOfC = lOf1+lOf2;
    c = new int[lOfC];
    int i, j, k;
    i = j = k = 0;
    while (i < lOf1 && j < lOf2)
    {
        if (arr1[i] < arr2[j]){
            i++;
            lOfC--;
        }
        else if (arr2[j] < arr1[i]){
            j++;
            lOfC--;
        }
        else
        {
            c[k++] = arr1[i++];
            j++;
            *lenOfNewArray++;
            
        }
    }
    // for (; i < lOf1; i++)
    // {
    //     c[k++] = arr1[i];
    // }
    // for (; j < lOf2; j++)
    // {
    //     c[k++] = arr2[j];
    // }
    // cout<<*lenOfNewArray<<endl;
    return c;
}

int main()
{
    int a[] = {3, 8, 16, 20, 25};
    int b[] = {2, 4, 8, 20, 23,30};
    int s1 = 5, s2 = 6;
    int *c;

    c = intersectionOfArrays1(a, s1, b, s2);
    // cout<<p;
    for (int i = 0; i < 10; i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}