// Parent Class Employee
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee {
// Attributes
protected:
    string name;
    int id;
    string type; // "Hourly" or "Salaried"
    

// Methods
public:
	// TODO: Constructor
    Employee() = default;

    // Constructor with arguments
    Employee(string name, int id, string type);

    virtual ~Employee() {}

    // Virtual function to calculate payment
    virtual double calculatePay() const = 0;

    // Getters
    string getType() const;
    string getName() const;
    int getId() const;
};

#endif

