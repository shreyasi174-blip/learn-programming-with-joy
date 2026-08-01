#include<iostream>
using namespace std;
class student{
    private:
     string name;
     int roll;
    public:
     void setName(string n){
         name=n;
     }
     string getName(){
         return name;
     }
     void setRoll(int a){
         roll=a;
     }
     int getRoll(){
         return roll;
     }
};
int main(){
    cout<<"Hello"<<endl;
    student s1;
    s1.setName("Shreyasi");
    s1.setRoll(183);
    cout<<"New student name is:"<<s1.getName()<<"\twith roll number"<<s1.getRoll()<<endl;
    return 0;
}
