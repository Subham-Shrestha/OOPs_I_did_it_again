// Write a program to read and display information about an author. An author is a person. [Use private derivation]

#include<iostream>
using namespace std;

class Person{
    private :
        string name;
        int age;
    public :
        void getData(){
            cout << "Enter name : ";
            cin >> name;
            cout << "Enter age : ";
            cin >> age;
        }
        void showData(){
            cout << "Name : " << name << endl;
            cout << "Age : " << age << endl;
        }
};
class Author : private Person{
    private :
        string book;
        string genre;

    public:
        void getAuthorData(){
            getData();
            cout << "Enter book name : ";
            getline(cin, book);
            cout << "Enter genre : ";
            getline(cin, genre);
        }
        void showAuthorData(){
            showData();
            cout << "Book Name : " << book << endl;
            cout << "Genre : " << genre << endl;
        }
};
int main(){
    Author a;
    a.getAuthorData();
    cout << "\nAuthor Information : " << endl;
    a.showAuthorData();
    return 0;
}