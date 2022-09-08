/*Create an Employee class to enter and display information of employee such as EmpID,
Name, Address, Designation and Salary of last five years and calculate average salary
(create five objects to enter and display data).*/
#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
private:
	int EmpID;
	string Name;
	string Address;
	string Designation;
	int Salary;

public:
	void setData()
	{
		cout << "Enter Employee ID : ";
		cin >> EmpID;
		cout << "Enter Employee Name : ";
		cin >> Name;
		cout << "Enter Employee Address : ";
		cin >> Address;
		cout << "Enter Employee Designation : ";
		cin >> Designation;
		cout << "Enter Employee Salary : ";
		cin >> Salary;
		cout << "---------------------------------\n";
	}

	void getData()
	{
		cout << "Employee ID : " << EmpID << endl;
		cout << "Employee Name : " << Name << endl;
		cout << "Employee Address : " << Address << endl;
		cout << "Employee Designation : " << Designation << endl;
		cout << "Employee Salary : " << Salary << endl;
		cout << "---------------------------------\n";
	}
};

int main()
{
	Employee e1;
	Employee e2;
	Employee e3;
	Employee e4;
	Employee e5;

	e1.setData();
	e2.setData();
	e3.setData();
	e4.setData();
	e5.setData();

	cout << "\n\n\nDISPLAYING DATA\n\n\n";
	e1.getData();
	e2.getData();
	e3.getData();
	e4.getData();
	e5.getData();
}
