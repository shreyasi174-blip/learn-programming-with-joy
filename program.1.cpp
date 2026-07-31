#include<iostream>
using namespace std;
class student {
    public:
    string name;
    int roll;
};
int main(){
    std::cout<<"Hello"<<std::endl;
    student s1;
    s1.name="Shreyasi";
    s1.roll=183;
    cout<<"My name is: "<<s1.name<<"\nand my roll number is "<<s1.roll<<endl;
    return 0;
}
