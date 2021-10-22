
#include <iostream>
#include "Complex.h"
using namespace std;


int main(){
  /// Creating Complex objects using constructor
  Complex d;
  Complex e;
  Complex r;

  cout<<"Enter value 1: ";
  cin>>d;
  cout<<"Entered Complex number: "<<d;

  cout<<"Enter value 2: ";
  cin>>e;
  cout<<"Entered Complex number: "<<e;
  
  //  Adding 2 ComplexInteger Objects.
  r = d + e;
  cout<<"Addition(+) : "<<r;

  // Subtracting a ComplexInteger Object from the other.
  r = d - e;
  cout<<"Subtraction(-) : "<<r;

  // Multiplying 2 ComplexInteger Objects.
  r = d*e;
  cout<<"Multiplication(*): "<<r;

  //  Dividing 2 ComplexInteger Objects.
  r = d/e;
  cout<<"Division(/): "<<r;
  
  /*  Assigning a ComplexInteger to the other.
  e=d;
  cout<<endl<<"Assignment: "<<e;
  we can use this for assigning d to e*/

  //  Swapping real and imaginary values of Complex object.
  ~d;
  cout<<"Swapping result 1: "<<d;

 ~e;
  cout<<"Swapping result 2: "<<e;  

  //  Multiplying ComplexInteger object with its conjugate.
  *d;
  cout<<"Multiplying by conjugate result 1: "<<d<<endl;

  *e;
  cout<<"Multiplying by conjugate result 2: "<<e;
  
 
  return 0;
}
