#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;
    string address;

public:
    void setName(const string& newName);
    void setAge(int newAge);
    void setAddress(const string& newAddress);

    string getName() const;
    int getAge() const;
    string getAddress() const;
};

#endif
