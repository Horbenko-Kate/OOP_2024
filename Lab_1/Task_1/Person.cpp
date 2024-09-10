#include "Person.h"

using namespace std;

void Person::setName(const string& newName) 
{
    name = newName;
}

void Person::setAge(int newAge) 
{
    age = newAge;
}

void Person::setAddress(const string& newAddress) 
{
    address = newAddress;
}

string Person::getName() const 
{
    return name;
}

int Person::getAge() const 
{
    return age;
}

string Person::getAddress() const 
{
    return address;
}
