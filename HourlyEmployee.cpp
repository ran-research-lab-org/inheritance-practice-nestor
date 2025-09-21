#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee(std::string name, int id, double payPerHour, double workedHours)
    : Employee(name, id, "Hourly"), payPerHour(payPerHour), workedHours(workedHours) {
    // Constructor calls parent Employee constructor with "Hourly" type
}

// Calculate bi-weekly pay (pay per hour * worked hours)
double HourlyEmployee::calculatePay() const {
    return payPerHour * workedHours;
}

// Getter for pay per hour
double HourlyEmployee::getPayPerHour() const {
    return payPerHour;
}

// Getter for worked hours
double HourlyEmployee::getWorkedHours() const {
    return workedHours;
}
/*TODO: calculate Payment */

