#include "Employee.h"

#include <string>
using namespace std;

Employee::Employee(string aName, int anID, string aType) {
    name = aName;
    id = anID;
    type = aType;
}

string Employee::getType() const {
    return type;
}

string Employee::getName() const {
    return name;
}

int Employee::getId() const {
    return id;
}


/* IMPLEMENT GETTERS*/