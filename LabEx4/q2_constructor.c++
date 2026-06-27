#include <iostream>
using namespace std;

class Student
{
private:
    int age;
    string name;

public:

    Student()
    {
        age = 0;
        name = "Unknown";
        cout << "Default Constructor Called" << endl;
    }

    Student(int a)
    {
        age = a;
        name = "Unknown";
        cout << "Constructor with Age Called" << endl;
    }

    Student(string n)
    {
        age = 0;
        name = n;
        cout << "Constructor with Name Called" << endl;
    }

    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    ~Student()
    {
        cout << "Destructor Called" << endl;
    }
};

int main()
{
    Student s1;         
    Student s2(18);      
    Student s3("Alice"); 

    s1.display();
    s2.display();
    s3.display();

    return 0;
}