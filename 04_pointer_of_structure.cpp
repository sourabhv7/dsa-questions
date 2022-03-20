#include <iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

// int main()
// {
//     struct rectangle r = {10,30};
//     struct rectangle *p = &r;

//     // accessing struct data by pointer
//     (*p).length = 20;       // int cpp
//     cout<<(*p).length<<endl;

//     p->length = 33;         //int c
//     cout<<p->length;
//     return 0;
// }

// dyanamic allocation of pointer of structure
int main()
{
    struct rectangle *p;
    // p = (struct rectangle *)malloc(sizeof(struct rectangle));  //in C

    p = new struct rectangle;   //int C++

    cout<<sizeof(p);
}