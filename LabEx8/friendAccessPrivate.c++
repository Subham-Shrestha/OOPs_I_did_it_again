//  Make use of a friend class to access private data members of another class.

#include <iostream>
using namespace std;

class Battery{
private:
    int charge;
    string type;
public:
    void getData(){
        cout << "Enter Battery Type: ";
        getline(cin, type);
        cout << "Enter Charge Percentage: ";
        cin >> charge;
        cin.ignore();
    }
    friend class BatteryInfo;
};
class BatteryInfo{
public:
    void display(Battery battery){
        cout << endl << "Battery Details";
        cout << endl << "Type   : " << battery.type;
        cout << endl << "Charge : " << battery.charge << "%";
    }
};

int main(){
    Battery batteryDetails;
    BatteryInfo info;
    batteryDetails.getData();
    info.display(batteryDetails);
    return 0;
}