#include<iostream>
#include<string>
using namespace std;

class Employee {
    private:
    string name;
    int employeeID;
    double basicSalary;
    double da;
    double hra;
    double pf;
    double netSalary;

public:
        Employee(string empName, int empID, double basic) {
        name = empName;
        employeeID=empID;
        basicSalary=basic;
        da=0.0;
        hra=0.0;
        pf=0.0;
        netSalary=0.0;
        }

        void calculateSalaryComponents() {
        da = basicSalary * 0.50;
        hra = basicSalary * 0.30;
        pf = basicSalary * 0.10;
        netSalary = basicSalary + da +hra-pf;
    }


        void displayEmployeeDetails() {
        cout << "--- Employee Details ---" <<endl;
        cout << "Name: " << name <<endl;
        cout << "Employee ID: " << employeeID <<endl;
        cout << "Basic Salary: $" << basicSalary <<endl;
        cout << "DA: $" << da <<endl;
        cout << "HRA: $" << hra <<endl;
        cout << "PF: $" << pf <<endl;
        cout << "Net Salary: $" << netSalary <<endl;
    }

};

int main(){
    Employee emp1("Bipn", 101, 9000);

    emp1.calculateSalaryComponents();

    emp1.displayEmployeeDetails();



    Employee emp2("Bipn", 101, 9000);

    emp2.calculateSalaryComponents();

    emp2.displayEmployeeDetails();



   /* Employee emp2("Vivek", 102, 90,000);

    emp2.calculateSalaryComponents();

    emp2.displayEmployeeDetails();*/



}
