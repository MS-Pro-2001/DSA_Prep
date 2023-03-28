#include<iostream.h>


using namespace std;


void accessingArrayManually(){

      

  int A[5]; //Declaration of an array

  // initializing values of array
 
  A[0] = 20;
  A[1] = 21;
  A[2] = 22;
  A[3] = 23;
  A[4] = 24;

  // accessing array elements
  cout<<A[0]<<endl;
  cout<<A[1]<<endl;
  cout<<A[2]<<endl;
  cout<<A[3]<<endl;
  cout<<A[4]<<endl;

  


}

void accessingArrayUsingLoop() {

    int A[] = {1,2,3,4,5}; // another way to initialize the array

    // accessing the whole array using for and forEach(only in c++) loop

    for(int i=0;i<5;i++){
        cout<<A[i]<<endl;
    }


}


void accessingArrayUsingForEachLoop(){

    int A[5] = {1,2,3,4,5};
    for(int x:A){
        cout<<x<<endl;
    }

}



 void variableArraySize(){

    int n;
    cout<<"Enter Size:"<<endl;
    cin>>n;
    int A[n];

  // forEach loop
    for(int x:A){
        cout<<x<<endl;

    }

 } 

int main(){

    // Uncomment the functions to run the codes

//    accessingArrayManually();

// accessingArrayUsingLoop();

// accessingArrayUsingForEachLoop();

 // variableArraySize();


    

  



  
    return 0;
}