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
class graduatestd:public person(string name, int yob){
    name = name;
    yob = yob:
    public:
    void dis(){
        cout<<"Name: "<<name<<endl;
        cout<<"Year of birth: "<<yob<<endl;
    }
};
int main(){
    person p;
    student s;
    graduatestd st;
    st.name;
    st.age;
    st.dis("Atharv Khaire", 22);
    return 0;
}
