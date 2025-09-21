#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include "Employee.h"
using namespace std;

class HourlyEmployee : public Employee {
public:
    double payPerHour;
    double workedHours;

    HourlyEmployee(string name, int id, double payPerHour, double workedHours);

    double calculatePay() const override;
    double getPayPerHour() const;
    double getWorkedHours() const;
};

#endif

