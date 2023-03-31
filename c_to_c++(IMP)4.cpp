#include<iostream.h>
using namespace std;

// note : memory is not allocated when the class is created it is allocated when the object of the class is initialised

class rectangle
{
    private:
       int length;
       int breadth;

    public:

    rectangle(int l, int b)   // initialization
    {
        length = l;
        breadth = b;

    }

    int area();

    int perimeter();
    // void setlength(int l);
    int getlength();


};


//  ::   -> scope resolution operator
//  used when function is defined outside the class
int rectangle::area(){
    return length*breadth;
}

int rectangle::perimeter(){
    return 2*(length+breadth);
}

int rectangle::getlength(){
    return length;
}


int main(){

    rectangle r(2,4);   // r is object of the class  syntax :  classname ObjectName;

   
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    
     cout<<r.getlength()<<endl;

    return 0;
}