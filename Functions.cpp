#include<iostream.h>
using namespace std;

int add(int a, int b)  //formal parameter
{
    int c = a+b;
    return c;
}




int main(){

    int sum,x=10,y=20;

    sum=add(x,y);   //actual parameter
    cout<<sum<<endl;




}