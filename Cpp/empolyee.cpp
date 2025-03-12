#include<iostream>
using namespace std;

class Employee
{
    private:
    int emp_id;
    string emp_name;
    int emp_salary;
    string emp_department;

    public:
    Employee(int id, string name, int salary, string department)
    {
    emp_id = id;
    emp_name = name;
    emp_salary = salary;
    emp_department = department;
    }

    void setDepartment(string new_department)
    {
        emp_department = new_department;
        cout << "Department assigned successfully! \n";
        cout << "Newly Assigned Department is: " << emp_department << "\n";
    }

    void printEmployeeDetails()
    {
        cout << "Employee Name: " << emp_name << "\n";
        cout << "Employee ID: " << emp_id << "\n";
        cout << "Employee Salary: " << emp_salary << "\n";
        cout << "Employee Department: " << emp_department << "\n";
    }

    void calculateSalaryWithOvertime(int hours_worked)
    {
        if (hours_worked > 50)
        {
            int overtime = hours_worked - 50;
            int overtime_amount = overtime * (emp_salary / 50);
            emp_salary += overtime_amount;
            cout << "Overtime: " << overtime << " hours\n";
            cout << "Overtime Amount: " << overtime_amount << "\n";
        }
        cout << "Total Salary (with Overtime if any): " << emp_salary << "\n";
    }

    int getEmpId() 
    {
        return emp_id; 
    }
};

int main()
{
    Employee employees[5] = 
    {
        Employee(7876, "ADAMS", 50000, "ACCOUNTING"),
        Employee(7499, "JONES", 45000, "RESEARCH"),
        Employee(7900, "MARTIN", 50000, "SALES"),
        Employee(7698, "SMITH", 55000, "OPERATIONS"),
        Employee(7901, "CLARK", 60000, "MANAGEMENT")
    };

    int choice = 0;
    int Salary = 0;
    int HoursWorked = 0;
    string dept = "";
    int id = 0;
    bool found = false;

    while (true)
    {
        cout << "Enter 1 to Print Employee Details \n";
        cout << "Enter 2 to Calculate Salary \n";
        cout << "Enter 3 to Assign Department \n";
        cout << "Enter 4 to Exit \n";

        cout << "Enter the choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter employee ID to print details: ";
                cin >> id;
                found = false;

                for (int i = 0; i < 5; i++)
                {
                    if (employees[i].getEmpId() == id)
                    {
                        employees[i].printEmployeeDetails();
                        found = true;
                        break;
                    }
                }

                if (!found) 
                {
                    cout << "Employee ID not found.\n";
                }
                break;

            case 2:
                cout << "Enter employee ID to calculate salary: ";
                cin >> id;

                cout << "Enter hours worked: ";
                cin >> HoursWorked;

                found = false;

                for (int i = 0; i < 5; i++)
                {
                    if (employees[i].getEmpId() == id)
                    {
                        employees[i].calculateSalaryWithOvertime(HoursWorked);
                        found = true;
                        break;
                    }
                }

                if (!found) 
                {
                    cout << "Employee ID not found.\n";
                }
                break;

            case 3:
                cout << "Enter employee ID to assign department: ";
                cin >> id;

                cout << "Enter the new department: ";
                cin >> dept;

                found = false;

                for (int i = 0; i < 5; i++)
                {
                    if (employees[i].getEmpId() == id)
                    {
                        employees[i].setDepartment(dept);
                        found = true;
                        break;
                    }
                }

                if (!found) 
                {
                    cout << "Employee ID not found.\n";
                }
                break;

            case 4:
                cout << "Exiting...\n";
                return 0;

            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
}
