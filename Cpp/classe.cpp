#include<iostream>
using namespace std;
class Student{
    public:
    string name = "Atharv Khaire";
    int rno = 115;
    int age = 23;
};
int main(){
    Student s1;
    cout<<s1.name<<endl;
    cout<<s1.rno<<endl;
    cout<<s1.age<<endl;
    return 0;
}