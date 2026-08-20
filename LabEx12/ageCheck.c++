// Create a class named Person and record the data of 5 people in a file. Then, retrieve the written data and display information of only those people whoare30yrs or older.
#include <iostream>
#include <fstream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    void getData()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Person p;
    fstream file;

    // Open file for writing
    file.open("person.txt", ios::out);

    cout << "Enter data of 5 people:\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "\nPerson " << i + 1 << endl;

        p.getData();

        file << p.name << " " << p.age << endl;
    }

    file.close();

    // Open file for reading
    file.open("person.txt", ios::in);

    cout << "\nPeople who are 30 years or older:\n";

    while (file >> p.name >> p.age)
    {
        if (p.age >= 30)
        {
            p.display();
            cout << endl;
        }
    }

    file.close();

    return 0;
}