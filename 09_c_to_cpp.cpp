#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void initialize(struct Rectangle *r,int l , int b){
    r->length = l;
    r->breadth = b;
}

int area(struct Rectangle r1){
    int area = r1.length * r1.breadth;
    return area;
}

void changelength(struct Rectangle *r2, int l){
    r2->length = l;
}

int main()
{
    struct Rectangle r;
    initialize(&r,10,5);
    cout<<"Initialization -->"<<r.length<<" "<<r.breadth<<endl;
    int a = area(r);
    cout<<"Area-->"<<a<<endl;
    changelength(&r,56);
    cout<<"After chnaging length, length = "<<r.length<<", breadth = "<<r.breadth<<endl;
    
    return 0;
}