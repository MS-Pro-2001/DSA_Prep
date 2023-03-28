#include<iostream.h>

struct rectangle
{
    int breadth;
    int length;

};

int main(){

  struct rectangle r={10,20};   //memory allocation in stack
  rectangle *p1=&r;
  

  std::cout<<p1->breadth<<std::endl;
  std::cout<<p1->length<<std::endl;


//   struct rectangle r={30,40};
  rectangle *p2;
  p2=(rectangle *)malloc(sizeof(rectangle));  //memory allocation in heap
  //OR
//   p2= new rectangle;
  p2->breadth=30;
  p2->length=40;

  std::cout<<p2->breadth<<p2->length;



   


    return 0;
}