#include <iostream>
using namespace std;
void fibo(int n,int a,int b) {
    if (n<=0) {
       return; 
    }
   cout<<n<<"th term: a="<<a<<"and b="<<b<<endl;
  fibo( n-1,b,a+b);
}
int main(){
  fibo(10,0,1);
    return 0;
}
