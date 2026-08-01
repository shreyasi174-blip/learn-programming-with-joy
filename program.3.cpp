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
    student s[100];
    for(int i=1;i<6;i++){
    cout<<"Enter details of student "<<i<<": ";
    string name;
    int roll;
    cin>>name>>roll;
    s[i].setName(name);
    s[i].setRoll(roll); 
 }
   for(int j=1;j<6;j++)
   cout<<j<<"th student's name is "<<s[j].getName()<<" ,with roll number "<<s[j].getRoll()<<endl;
    return 0;
}
