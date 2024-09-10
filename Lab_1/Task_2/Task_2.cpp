#include <iostream>
#include <string>

using namespace std;



int main()
{
    struct Person
    {
        string name;
        int age;
        string address;
    };

    Person firstPerson;
    firstPerson.name = "George";
    firstPerson.age = 21;
    firstPerson.address = "Wroclaw, Jesionowa 21";

    cout << "Name: " << firstPerson.name << endl;
    cout << "Age: " << firstPerson.age << endl;
    cout << "Address: " << firstPerson.address << endl;
}
