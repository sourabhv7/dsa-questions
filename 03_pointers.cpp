#include<iostream>
using namespace std;

// int main()
// {
//     int *p;
//     int a = 10;
//     p = &a;
//     cout<<*p<<endl;
//     cout<<p;
//     return 0;
// }

// for array
// int main()
// {
//     int *q;
//     int arr[5] = {1,2,3,4,5};
//     q = arr;     // in case of the array do not add '&' before array
//     cout<<q<<endl;
//     for( int i = 0; i<5; i++){
//         cout<<q[i]<<endl;
//     }
//     return 0;
// }

// For accesing Heap memory;

// int main(){
//     int *p;
//     p = new int[3];  // for array
    
//     p = new int;  //for int

//     p[0] = 1 , p[1] = 2, p[2] = 3;
//     for(int i = 0; i<3; i++){
//         cout<<p[i]<<endl;
//     }

//     delete [ ] p;  // delete pointer of array
//     // delete p;  // delete pointer of integer
    
//     return 0;
// }

// Size of pointers 
int main(){
    int *p1;
    float *p2;
    char *p3;
    double *p4;
    struct *p5;

    cout<<sizeof(p1)<<endl; //-->8
    cout<<sizeof(p2)<<endl; //-->8
    cout<<sizeof(p3)<<endl; //-->8
    cout<<sizeof(p4)<<endl; //-->8
    cout<<sizeof(p5)<<endl; //-->8

    // pointer take 8 bytes of memory for any type of datatype
}