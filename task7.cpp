#include <iostream>

using namespace std;

int main() {
  double hoursWorked, hourlyRate, grossPay;

  cout << "Enter the hours worked: ";
  cin >> hoursWorked;

  cout << "Enter the hourly rate: ";
  cin >> hourlyRate;

  if (hoursWorked <= 40) {
    grossPay = hoursWorked * hourlyRate;
  } else {
    grossPay = (40 * hourlyRate) + (hoursWorked - 40) * hourlyRate * 1.5;
  }

  cout << "Gross pay: " << grossPay << endl;

  return 0;
}