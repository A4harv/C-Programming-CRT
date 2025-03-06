#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int rno;
    int age;
    void printInfo(string a, int b, int c)
    {
        name = a;
        rno = b;
        age = c;
        cout << "Name: " << name << endl;
        cout << "Roll no: " << rno << endl;
        cout << "Age: " << age << endl;
    }
};
int main()
{
    Student s1, s2;
    s1.printInfo("Atharv Khaire",115,23);
    s2.printInfo("Kartik Shinde",86,22);
    return 0;
}