//
// Created by Subham Shrestha on 12/06/2026.
//

// Write a program that inputs 'n' integers from the user. Then, create a function pointer to find the maximum value among these integers. The function definition itself should also use pointer for comparison.

#include <iostream>
using namespace std;

int findMax(int *arr, int n){
    int *maxPtr = arr;
    for (int *ptr = arr; ptr < arr + n; ptr++){
        if (*ptr > *maxPtr){
            maxPtr = ptr;
        }
    }
    return *maxPtr;
}

int main(){
    int n;
    cout << "Enter the number of integers: ";
    cin >> n;
    int arr[1000];

    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int (*funcPtr)(int *, int) = &findMax;

    int maximum = funcPtr(arr, n);

    cout << "Maximum value: " << maximum << endl;

    return 0;
}