//
// Created by Subham shrestha on 08/06/2026.
//
#include<iostream>
using namespace std;

int main(){

    int id, age, applicantCanLift, applicantExperience;
    string firstName, lastName;

    cout << endl << "Enter the id of the applicant : ";
    cin >> id;
    cout << endl << "Enter the age of applicant : ";
    cin >> age;
    cout << endl << "Enter the full name of the applicant : ";
    cin >> firstName >> lastName;
    cout << endl << "Enter the weight lift the applicant can lift : ";
    cin >> applicantCanLift;
    cout << endl << "Enter the experience of the applicant : ";
    cin >> applicantExperience;

    if((applicantExperience > 4) && (age > 24) && (applicantCanLift >= 35)){
        cout << endl << "The applicant is qualified for the job." << endl;
    }else if((age >= 18) && (age <= 24) && (applicantCanLift >= 50)){
        cout << endl << "The applicant is qualified for the job." << endl;
    }else{
        cout << endl << "The applicant is not qualified for the job." << endl;
    }

    return 0;
}