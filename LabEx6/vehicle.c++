#include <iostream>
using namespace std;

class Vehicle
{
private:
    char brand[30];

public:
    void getVehicle()
    {
        cout << "Enter Brand: ";
        cin >> brand;
    }

    void displayVehicle()
    {
        cout << "Brand: " << brand << endl;
    }
};

class Car : public Vehicle
{
private:
    int hp;

public:
    void input()
    {
        getVehicle();
        cout << "Enter Horsepower: ";
        cin >> hp;
    }

    void display()
    {
        displayVehicle();
        cout << "Horsepower: " << hp << " HP" << endl;
    }
};

class Boat : public Vehicle
{
private:
    int capacity;

public:
    void input()
    {
        getVehicle();
        cout << "Enter Capacity: ";
        cin >> capacity;
    }

    void display()
    {
        displayVehicle();
        cout << "Capacity: " << capacity << " persons" << endl;
    }
};

class Aeroplane : public Vehicle
{
private:
    int passengers;

public:
    void input()
    {
        getVehicle();
        cout << "Enter Passenger Capacity: ";
        cin >> passengers;
    }

    void display()
    {
        displayVehicle();
        cout << "Passenger Capacity: " << passengers << endl;
    }
};

int main()
{
    Car c;
    Boat b;
    Aeroplane a;

    cout << endl << "For car" << endl;
    c.input();

    cout << endl << "For boat" << endl;
    b.input();

    cout << endl << "For aeroplane" << endl;
    a.input();

    cout << endl << endl << "Car Details" << endl;
    c.display();

    cout << endl << "Boat Details" << endl;
    b.display();

    cout << endl << "Aeroplane Details" << endl;
    a.display();

    return 0;
}