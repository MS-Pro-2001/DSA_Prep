#include<iostream.h>
#include<stdlib.h>
using namespace std;


void concept1(){

// Normal pointer declaration

 int a=10;

    int *p;

    p = &a;

    cout<<a<<endl;  // value of a
    cout<<p<<endl;  // address of block it is pointing to
    cout<<*p<<endl; // dereferencing value of a



}


void concept2(){

//    Array and pointer

 int A[5] = {2,3,4,5,6} ; // Remember this array is already storing the address of block of index 1 holding value 2 in this case

  int *p;

  p=A; // Yes no need for ampersand(&) as array is already storing the address of first block

for(int i=0;i<5;i++){

  cout<<p[i]<<endl;

}

}
void concept3(){

    // creating array using pointer
    // Dynamically allocated
    // getting memory from heap

    // c - method
   
    int *p1;
    p1 = (int *)malloc(5*sizeof(int));
    p1[0]=10; p1[1]=20; p1[2]=30; p1[3]=40; p1[4]=50;


    for(int i=0;i<5;i++){
        cout<<p1[i]<<endl;
    }

    free(p1);

    // similary using new keyword
    // c++-method to allocate memory in heap
    int *p2;
    p2 = new int[5];
     p2[0]=100; p2[1]=200; p2[2]=300; p2[3]=400; p2[4]=500;


   
    for(int i=0;i<5;i++){
        cout<<p2[i]<<endl;
    }

    // Deleting for freeing up the memory
    delete [] p2;



}


struct rectangle
{
    int length;
    int breadth;

};

void concept4(){

    struct rectangle *p1;
    cout<<sizeof(p1);

}








int main()
{

//    concept1();
//    concept2();
    // concept3();

    concept4();
   



    
    return 0;

}