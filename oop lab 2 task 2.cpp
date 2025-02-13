#include <iostream>
using namespace std;
int calculateGrossSalary(int basic, int allowance) 
{
    int gross = basic + (basic * allowance / 100);
    return gross;
}
int calculateNetSalary(int gross, int deduction) 
{
    int net = gross - (gross * deduction / 100);
    return net;
}
int main()
{
    int basic;
	int allowance;
	int deduction;
    cout << "Enter Basic Salary: ";
    cin >> basic;
    cout << "Enter Allowance Percentage: ";
    cin >> allowance;
    cout << "Enter Deduction Percentage: ";
    cin >> deduction;
    int gross = calculateGrossSalary(basic, allowance);
    cout << "The Gross Salary is: " << gross << endl;
    int net = calculateNetSalary(gross, deduction);
    cout << "The Net Salary is: " << net << endl;
    return 0;
}
