#include<iostream.h>
using namespace std;


struct rectangle
{
    int length;
    int breadth;

};



void fun(rectangle r1){


   r1.breadth=100;
   r1.length=200;
    cout<<r1.breadth<<endl<<r1.length;

}

int main(){

    struct rectangle r1 ={10,20 };  // memory allocated in stack

    fun(r1); // pass by value
    // fun(&r1); // pass by address

    cout<<r1.breadth<<endl<<r1.length;

   



    return 0;
}