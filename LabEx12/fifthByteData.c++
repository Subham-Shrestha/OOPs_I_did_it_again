// Create a text file and write some data into it. Then, read every other 5bytesofdata from this file and display it onto the output screen.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    char ch;
    int count = 0;

    // Create file and write data
    file.open("data.txt", ios::out);

    file << "Hello World! This is a test file.";

    file.close();

    // Open file for reading
    file.open("data.txt", ios::in);

    cout << "Every 5th byte of data:" << endl;

    while (file.get(ch))
    {
        count++;

        if (count % 5 == 0)
        {
            cout << ch;
        }
    }

    file.close();

    return 0;
}