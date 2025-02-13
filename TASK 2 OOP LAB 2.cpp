#include <iostream>
#include<string>
using namespace std;
int calculategrossSalary(int basic,int allowance)
{
	cout<<"Enter basic salary"<<endl;
	cin>>basic;
	cout<<"Enter Allowance Percentage"<<endl;
	cin>>allowance;
	int gross=allowance+basic;
	cout<<"The gross salary is:"<<gross<<endl;
	return 0;
}
int calculatenetsalary(int gross,int deduction)
{
	cout<<"Enter gross salary"<<endl;
	cin>>gross;
	cout<<"Enter Deduction Percentage"<<endl;
	cin>>deduction;
	int net=gross-deduction;
	cout<<"The net salary is:"<<net<<endl;
	return 0;
}
int main()
{
	int basic;
    int allowance;
    int deduction;
    int gross;
    calculategrossSalary(basic,allowance);
    calculatenetsalary(gross,deduction);
return 0;
}
