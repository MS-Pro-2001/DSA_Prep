#include<iostream.h>
using namespace std;


// creating class

class cars
{
private:
    
    int price=1000;
    int speed;

public:

// creating functions

 int SetPrice(int price){
     
    // using this keyword to access price at line 11;
    this->price=price;

    return price;
 }




 int SetSpeed(int speed){

    this->speed=speed;
    return speed;
 }

    

};




int main(){

    // creating an object of class cars

    cars Audi;

    cout<<Audi.SetPrice(202020)<<endl;
    cout<<Audi.SetSpeed(200)<<endl;



    return 0;
}