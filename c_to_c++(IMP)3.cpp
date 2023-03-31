#include<iostream.h>
using namespace std;

class rectangle
{
    private:
       int length;
       int breadth;

    public:

    rectangle(int l, int b)
    {
        length = l;
        breadth = b;

    }

    int area(){
        return length*breadth;
    }

    int perimeter()
    {
        return 2*(length+breadth);

    }

    void setlength(int a)
    {
        length = a;
    
    }

    int getlength()
    {
        return length;
    }



};


int main(){

    rectangle r(2,4);

   r.setlength(5);
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    
     cout<<r.getlength()<<endl;

    return 0;
}