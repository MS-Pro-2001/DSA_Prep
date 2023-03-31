// In this we will be discussing about Classes and constructor



#include<iostream.h>
using namespace std;


class rectangle
{
public:

    int length;
    int breadth;


void initialize(){
    length=10;
    breadth=20;

  
}

int area()
{
    return length*breadth;

    
}

};

int main(){

    rectangle r1;
    r1.initialize();  
     int ar=r1.area(); 
    cout<<ar<<endl;

    return 0;


}