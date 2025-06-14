#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string name, designation;
    int id;
    float basic, bonus, tax, netSalary;

    cout << "Enter Employee ID: ";
    cin >> id;
    cin.ignore();

    cout << "Enter Employee Name: ";
    getline(cin, name);

    cout << "Enter Designation: ";
    getline(cin, designation);

    cout << "Enter Basic Salary: ";
    cin >> basic;

    cout << "Enter Bonus: ";
    cin >> bonus;

    cout << "Enter Tax: ";
    cin >> tax;

    netSalary = basic + bonus - tax;

    cout << "\n--------------------------------------\n";
    cout << "        Employee Pay Slip\n";
    cout << "--------------------------------------\n";
    cout << "Employee ID     : " << id << endl;
    cout << "Employee Name   : " << name << endl;
    cout << "Designation     : " << designation << endl;
    cout << "--------------------------------------\n";
    cout << "Basic Salary    : " << fixed << setprecision(2) << basic << endl;
    cout << "Bonus           : " << bonus << endl;
    cout << "Tax             : " << tax << endl;
    cout << "--------------------------------------\n";
    cout << "Net Salary      : " << netSalary << endl;
    cout << "--------------------------------------\n";

    return 0;
}
