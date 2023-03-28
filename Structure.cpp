#include<iostream.h>

using namespace std;


struct rectangle{

    int length;
    int breadth;
};

//  OR

// struct rectangle{

//     int length;
//     int breadth;
// } r1,r2;




int main(){

    struct rectangle r1;
    cout<<"SizeOfStruct:"<<sizeof(r1)<<endl;
    cout<<"Enter length and breadth"<<endl;
    cin>>r1.length;
    cin>>r1.breadth;
    cout<<"Area of rectangle is:"<<r1.length*r1.breadth;

    return 0;
}
