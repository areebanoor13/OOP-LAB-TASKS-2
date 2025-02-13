#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string name;
    int ID;
    float Salary;
};
void InputEmployeeData(Employee Employees[], int count) {
    for (int i = 0; i < count; i++) {
        cout << "\nEnter details for Employee " << i + 1 <<endl;
        cout << "Name: ";
        cin >> Employees[i].name;
        cout << "ID: ";
        cin >> Employees[i].ID;
        cout << "Salary: ";
        cin >> Employees[i].Salary;
    }
}

void DisplayEmployeeData(Employee Employees[], int count) {
    cout << "\n--- Employee Records ---\n";
    for (int i = 0; i < count; i++) {
        cout << "ID: " << Employees[i].ID <<endl;
        cout << "Name: " << Employees[i].name <<endl;
        cout << "Salary: " << Employees[i].Salary <<endl;
    }
}
void FindHighSalary(Employee Employees[], int count) {
    int topIndex = 0;
    for (int i = 1; i < count; i++) {
        if (Employees[i].Salary > Employees[topIndex].Salary) {
            topIndex = i;
        }
    }
    cout << "\n--- Employee with Highest Salary ---\n";  
    cout << "Name: " << Employees[topIndex].name <<endl;
    cout << "ID: " << Employees[topIndex].ID <<endl;
    cout << "Salary: " << Employees[topIndex].Salary <<endl;
}
int main() {
    int numEmployees;
    cout << "Enter the number of Employees: ";
    cin >> numEmployees;
    Employee* Employees = new Employee[numEmployees];
    InputEmployeeData(Employees, numEmployees);
    DisplayEmployeeData(Employees, numEmployees);
    FindHighSalary(Employees, numEmployees);
    
    return 0;
}
