#include <iostream>
using namespace std;
class Employee
{

    string emp_id;
    string emp_name;
    int emp_salary;
    int emp_department;

    Employee()
    {
        emp_id = 0;
        emp_name = 0;
        emp_salary = 0;
        emp_department = 0;
    }

    void calculate_emp_salary()
    {

    }
    void emp_assign_department()
    {

    }
    void print_employee_details(string id, string name, int sal, int depart)
    {

    }
};
int main()
{
    Employee obj1;
    int choice = 0;
    cout<<"Enter 1 for Employee Details: "<<endl;
    cout<<"Enter 2 for Calculate Salary: "<<endl;
    cout<<"Enter 3 for  Assign Department: "<<endl;
    switch (choice)
    {
    case 1:
        obj1.print_employee_details();
        break;
    case 2:
        obj1.emp_assign_department();
        break;
    
    default:
        break;
    }

}