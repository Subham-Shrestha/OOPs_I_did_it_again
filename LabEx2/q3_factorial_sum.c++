#include <iostream>
using namespace std;

long factorial(int n){
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;

    double sum = 0;
    for (int i = 1; i <= n; i++){
        long fact = factorial(i);
        double term = (i * i) / (double)fact;
        if (i % 2 == 0)
            sum = sum - term;
        else
            sum = sum + term;
    }

    cout << "Sum of the series = " << sum << endl;
    return 0;
}