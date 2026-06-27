#include <iostream>
using namespace std;

struct Employee
{
    int id;
    char name[50];
    float salary;
    int isHead;
};

struct Department
{
    char deptName[50];
    Employee emp[5];
};

struct Pharmacy
{
    Department dept[3];
};

int main()
{
    Pharmacy p;
    int i, j;

    // Input data
    for (i = 0; i < 3; i++)
    {
        cout << "\nEnter Department Name: ";
        cin >> p.dept[i].deptName;

        for (j = 0; j < 5; j++)
        {
            cout << "\nEmployee " << j + 1 << endl;

            cout << "ID: ";
            cin >> p.dept[i].emp[j].id;

            cout << "Name: ";
            cin >> p.dept[i].emp[j].name;

            cout << "Salary: ";
            cin >> p.dept[i].emp[j].salary;

            cout << "Is Department Head (1 = Yes, 0 = No): ";
            cin >> p.dept[i].emp[j].isHead;
        }
    }

    // Display data
    cout << "\n\n----- Pharmacy Details -----\n";

    for (i = 0; i < 3; i++)
    {
        cout << "\nDepartment: " << p.dept[i].deptName << endl;

        for (j = 0; j < 5; j++)
        {
            cout << "\nID: " << p.dept[i].emp[j].id << endl;
            cout << "Name: " << p.dept[i].emp[j].name << endl;
            cout << "Salary: " << p.dept[i].emp[j].salary << endl;

            if (p.dept[i].emp[j].isHead == 1)
                cout << "Position: Department Head\n";
            else
                cout << "Position: Employee\n";
        }
    }

    // cout << endl << endl;
    // // cout << "\n\n----- Department Heads -----\n";

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         if (p.dept[i].emp[j].isHead == 1)
    //         {
    //             cout << "Department: " << p.dept[i].deptName << endl;
    //             cout << "Head Name : " << p.dept[i].emp[j].name << endl;
    //             cout << "ID        : " << p.dept[i].emp[j].id << endl;
    //             cout << endl;
    //         }
    //     }
    // }
    return 0;
}