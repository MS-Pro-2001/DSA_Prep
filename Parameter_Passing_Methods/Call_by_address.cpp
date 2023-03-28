// Swapping two numbers

#include<iostream.h>
using namespace std;




void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}


int main(){

    int x=10,y=20;
    swap(&x,&y);
    cout<<x<<endl<<y;


    return 0;
}