
#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

class Complex{
  private:
    int r;
    int i;

  public:
    Complex();
    Complex(int, int);

    void setComplex(int, int);

    int getReal() const;
    int getImg() const;

    /*Operator overloading*/
    
    friend std::ostream& operator << (std::ostream&, const Complex&);
    friend std::istream& operator >> (std::istream&, Complex&);
    friend Complex operator + (const Complex&, const Complex&);
    friend Complex operator - (const Complex&, const Complex&);
    friend Complex operator * (const Complex&, const Complex&);
    friend Complex operator / (const Complex&, const Complex&);
    void operator ~ ();
    void operator * ();
    void operator = (const Complex&);
    void operator = (int);

    void display(std::ostream&) const;
};

#endif //COMPLEX_H
