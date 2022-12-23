// Write a program to
// Compute the annual net salary, by deducting taxes as suggested.
// a.Income upto 2.5lakhs–exempted
// b.Income from 2.5lakhs to 5 lakhs–5 %
// c.Income from 5 lakhs to 10 lakhs –20 %
// d.Income from 10lakhsonwards –30 %

#include <iostream>
#include <string>

int main({
    std::string name, empId;
    int basicAllowances, specialAllowances, percentageOfBonus, monthlyTaxSaving, grossMonthlySalary, grossAnualSalary;
    // accept name, empId, basic, special allowances, percentage of bonus and monthly tax saving investments.
    std::cout << "Enter following details " << std::endl;
    std::cout << "Name : ";
    std::cin >> name;
    std::cout << "Emp ID : ";
    std::cin >> empId;
    std::cout << "Basic Allowances : ";
    std::cin >> basicAllowances;
    std::cout << "Special Allowances : ";
    std::cin >> specialAllowances;
    std::cout << "Percentage of Bonus : ";
    std::cin >> percentageOfBonus;
    std::cout << "Monthly Tax Saving : ";
    std::cin << monthlyTaxSaving;

    // The gross monthly salary is basic + special allowances.
    grossMonthlySalary = basicAllowances + specialAllowances;

    // Compute the annual salary.The gross annual salary also includes the bonus.
    grossAnualSalary = grossMonthlySalary
})