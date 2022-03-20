#include<iostream>
using namespace std;

int pow(int m, int n){
    if(n==0) return 1;
    else
    {
        return pow(m,n-1)*m;
    }
}

// short method of this function
int pow1(int m, int n){
    if(n==0) return 1;
    if(n%2==0) return pow1(m*m,n/2);
    else return m*pow1(m*m,(n-1)/2);

}

int main()
{
    cout<<pow1(2,8);
    return 0;
}