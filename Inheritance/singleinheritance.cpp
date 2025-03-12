#include <iostream>
using namespace std;
class person
{
public:
string name;
int age;
public:
void printInfo(string name , int age){
    name = name;
    age = age;
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
}
};
class student:public person{
    int Rno;
    string subject;
    public:
    void display(){
    cout<<"Roll no:"<<Rno<<endl;
    cout<<"Subject"<<subject<<endl;
    }

};
int main(){
    person p;
    student s;
    s.age;
    s.name;
    s.printInfo("Atharv Khaire", 22);
    return 0;
}
