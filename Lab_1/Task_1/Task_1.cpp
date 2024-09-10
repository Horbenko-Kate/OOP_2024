#include "Person.h"
#include <iostream>

using namespace std;

int main() {
    Person person;
    Person human;

    person.setName("Alex");
    person.setAge(25);
    person.setAddress("Uman, st. Solnechnaya");

    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;
    cout << "Address: " << person.getAddress() << endl;

    return 0;
}
