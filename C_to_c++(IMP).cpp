



#include<iostream.h>
using namespace std;





struct rectangle
{
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


}