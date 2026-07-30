#include <iostream>
using namespace std;

class Student
{
private:
    int age;
public:
    Student(int a = 0) : age(a) {}
    int getAge()
    {
        return age;
    }
    Student *operator->()
    {
        return this;
    }
};

int main()
{
    int age;
    cout << "Enter age: ";
    cin >> age;
    Student s(age);
    cout << "Age: " << s->getAge() << endl;
    return 0;
}