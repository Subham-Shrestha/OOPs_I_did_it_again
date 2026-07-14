// Write an object-oriented program for the following scenario. Make use of Virtual Class.

#include <iostream>
#include <string>
using namespace std;

class ElectronicDevice
{
protected:
    string brand;
public:
    void getDevice()
    {
        cout << "Enter Device Brand: ";
        cin >> brand;
    }
    void showDevice()
    {
        cout << "Device Brand: " << brand << endl;
    }
};

class Printer : virtual public ElectronicDevice
{
protected:
    int printSpeed;

public:
    void getPrinter()
    {
        cout << "Enter Print Speed (pages/min): ";
        cin >> printSpeed;
    }
    void showPrinter()
    {
        cout << "Print Speed: " << printSpeed << " pages/min" << endl;
    }
};

class Scanner : virtual public ElectronicDevice
{
protected:
    int scanResolution;

public:
    void getScanner()
    {
        cout << "Enter Scan Resolution (DPI): ";
        cin >> scanResolution;
    }

    void showScanner()
    {
        cout << "Scan Resolution: " << scanResolution << " DPI" << endl;
    }
};

class PhotocopyMachine : public Printer, public Scanner
{
private:
    string type;

public:
    void getData()
    {
        getDevice();
        cout << "Enter Type(IR, Laser, Color) : ";
        cin >> type;
        getPrinter();
        getScanner();
    }

    void showData()
    {
        cout << "\n----- Photocopy Machine Details -----\n";
        showDevice();
        cout << "Type: " << type << endl;
        showPrinter();
        showScanner();
    }
};

int main()
{
    PhotocopyMachine photocopyMachine;

    photocopyMachine.getData();
    photocopyMachine.showData();

    return 0;
}