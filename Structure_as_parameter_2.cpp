#include<iostream.h>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
}r1;

void initialize(rectangle *r1){
    r1->length=10;
    r1->breadth=20;

    // this is directly accessing the structure r1 created in main function
}

int area(rectangle r1)
{
    return r1.length*r1.breadth;

    // here it is creating another struct rectangle type block in stack and not changing original block 
}


int main(){
    initialize(&r1);  // call by address
    int ar=area(r1); // call by value
    cout<<ar<<endl;


}