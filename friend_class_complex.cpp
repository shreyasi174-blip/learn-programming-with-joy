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
      friend class B;
};

class B{
    public:
    void display(complexNum a){
        cout<<"The real part is"<<a.real<<" and the imaginary part is "<<a.imag<<endl;
         }
};
int main(){
    complexNum num1;
    complexNum num2(10,2);
    
    B dis;
    dis.display(num2);

    num1.display();
    num2.display();

    complexNum num3;
    num3.setReal(num1.getReal()+num2.getReal() );
    num3.setImaginary(num1.getImaginary()+num2.getImaginary() );
    num3.display();

    return 0;
}
