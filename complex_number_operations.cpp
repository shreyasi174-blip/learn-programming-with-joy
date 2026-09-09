#include <iostream> 
using namespace std; 

class complexNum{ 
 private: 
     double real,imag; 
 
 public: 
      complexNum(){ 
        real=0.0; 
        imag=0.0; 
        cout<<"Initializing a zero valued complex number\n"; 
      } 

      complexNum(double re,double im){ 
        real=re; 
        imag=im; 
        cout<<"Initializing with the two given inputs.\n"; 
      } 

      void display(){ 
        cout<<real<<"+i"<<imag<<endl; 
      } 

      double getReal(){ return real;} 
      void setReal(double re){real=re;} 
      double getImaginary(){ return imag;} 
      void setImaginary(double im){imag=im;} 
 
      void add(complexNum num1,complexNum num2){ 
        real=num1.real+num2.real; 
        imag=num1.imag+num2.imag; 
      } 

      void sub(complexNum num1,complexNum num2){ 
        real=num1.real-num2.real; 
        imag=num1.imag-num2.imag; 
      } 

      void mul(complexNum num1,complexNum num2){ 
        real=num1.real*num2.real-num1.imag*num2.imag; 
        imag=num1.real*num2.imag+num1.imag*num2.real; 
      } 
}; 

int main(){ 

    complexNum num1; 
    complexNum num2(10,2); 

    num1.display(); 
    num2.display(); 

    complexNum num3; 
    num3.setReal(num1.getReal()+num2.getReal() ); 
    num3.setImaginary(num1.getImaginary()+num2.getImaginary() ); 
    num3.display(); 

    complexNum num4; 
    num4.setReal(num1.getReal()-num2.getReal() ); 
    num4.setImaginary(num1.getImaginary()-num2.getImaginary() ); 
    num4.display(); 

    complexNum num5; 
    num5.setReal(num1.getReal()*num2.getReal() ); 
    num5.setImaginary(num1.getImaginary()*num2.getImaginary() ); 
    num5.display(); 

    num3.add(num1,num2); 
    num3.display(); 

    num4.sub(num1,num2); 
    num4.display(); 

    num5.mul(num1,num2); 
    num5.display(); 

    return 0; 
}
