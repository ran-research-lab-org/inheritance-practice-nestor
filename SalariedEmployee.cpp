#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee(const std::string& name, int id, double yearlyPayment)
    : Employee(name, id, "Salaried"), yearlyPayment(yearlyPayment) {
    // Constructor calls parent Employee constructor with "Salaried" type
}

// Calculate bi-weekly pay (yearly payment / 26 pay periods)
double SalariedEmployee::calculatePay() const {
    return yearlyPayment / 26.0;
}

// Getter for yearly payment
double SalariedEmployee::getYearlyPayment() const {
    return yearlyPayment;
}