#include <iostream>
using namespace std;

void findingDuplicates(int *arr, int n)
{
    int last_duplicate = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int count = 1;
        if (arr[i] != -1)
        {
            for(int j = i+1; j < n ; j++){
                if (arr[i]==arr[j])
                {
                    count++;
                    arr[j] = -1;
                }
            }
            if (count>1) cout<<arr[i]<<" - "<< count<<endl;
            
            
        }
    }
}
int main()
{
    int a[] = {8, 11, 26, 12, 12, 8, 12, 24, 26, 24, 16};
    findingDuplicates(a, 12);

    return 0;
}