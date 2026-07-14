#include <iostream>
using namespace std;

class B;
class A{
private:
    int x;
public:
    void setValue(int a){
        x = a;
    }
    int getValue(){
        return x;
    }
    friend int add(A, B);
};

class B{
private:
    int y;
public:
    void setValue(int b){
        y = b;
    }
    int getValue(){
        return y;
    }
    friend int add(A, B);
};

int add(A obj1, B obj2){
    return obj1.x + obj2.y;
}

int main(){
    int value1, value2;
    cout << "Enter value for first class : ";
    cin >> value1;

    cout << "Enter value for second class : ";
    cin >> value2;

    A firstClass;
    B secondClass;

    firstClass.setValue(value1);
    secondClass.setValue(value2);

    cout << "Sum of private data members: " << add(firstClass, secondClass) << endl;
    return 0;
}