#include<iostream>
using namespace std;

void table_of(int n,int x){

    if(x<=10){
        cout<<(x*n)<<endl;
        table_of(n,x+1);

    }
}
int main()
{   
    table_of(7,1);
    return 0;
}