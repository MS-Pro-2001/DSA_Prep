#include<iostream.h>
using namespace std;

template<class T>
class arithmetic{

private:
   T a;
   T b;

public:
   arithmetic(T a,T b);
   T add();
   
};

template<class T>

arithmetic<T>::arithmetic(T a, T b){

  this->a=a;
  this->b=b;  

}
template<class T>

T arithmetic<T>::add()
{
    T c;
    c=this->a + this->b;
    return c;

}


int main(){
    arithmetic <float> A(10.5,5.5);  // just need to change the datatype here only once
    cout<<A.add()<<endl;
}