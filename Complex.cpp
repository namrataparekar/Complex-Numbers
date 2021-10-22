
#include "Complex.h"
#include <iostream>
using namespace std;

Complex::Complex(){
  this->setComplex(0,0);
}

Complex::Complex(int r,int i){
  this->setComplex(r,i);
}

// setter method
void Complex::setComplex(int r, int i){
  this->r = r;
  this->i = i;
}

//getter method
int Complex::getReal() const {
  return r;
}

int Complex::getImg() const {
  return i;
}

//Operator overloading


ostream& operator << (ostream& cout, const Complex& z){
  z.display(cout);
  return cout;
}

istream& operator >> (istream& cin, Complex& z){
  int r,i;
  cin>>r>>i;
  z.setComplex(r,i);
  return cin;
}

Complex operator + (const Complex& a, const Complex& b){
  int r,i;
  Complex z;
  r = a.getReal() + b.getReal();
  i = a.getImg() + b.getImg();
  z.setComplex(r,i);
  return z;
}

Complex operator - (const Complex& a, const Complex& b){
  int r,i;
  Complex z;
  r = a.getReal() - b.getReal();
  i = a.getImg() - b.getImg();
  z.setComplex(r,i);
  return z;
}

Complex operator * (const Complex& a, const Complex& b){
  int r,i;
  Complex z;
  r = a.getReal()*b.getReal() - a.getImg()*b.getImg();
  i = a.getReal()*b.getImg() + a.getImg()*b.getReal();
  z.setComplex(r,i);
  return z;
}

Complex operator / (const Complex& a, const Complex& b){
  int r,i,s;
  Complex z;
  i = -b.getImg();
  r = b.getReal();
  s = i*i + r*r;
  z.setComplex(r,i);
  z = a*z;
  r = z.getReal()/s;
  i = z.getImg()/s;
  z.setComplex(r,i);
  return z;
}

void Complex::operator ~ (){
  int r,i;
  r = this->getReal();
  i = this->getImg();
  this->setComplex(i,r);
}

void Complex::operator * (){
  int r,i,s;
  r = this->getReal();
  i = this->getImg();
  s = r*r + i*i;
  this->setComplex(s,0);
}

void Complex::operator = (const Complex& c){
  this->setComplex(c.getReal(),c.getImg());
}

void Complex::operator = (int r){
  this->setComplex(r,0);
}


void Complex::display(ostream& cout) const {
  if(r != 0)
    cout<<r;
  if(i != 0){
    if(i > 0){
      if(r == 0)
        cout<<i<<"i"<<endl;
      else
        cout<<" + "<<i<<"i"<<endl;
    }

    else
      cout<<i<<"i"<<endl;
  }
  if(r == 0 && i == 0)
    cout<<0<<endl;
}
