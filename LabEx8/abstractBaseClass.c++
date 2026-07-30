// Write a program for the following scenario. Make use of Abstract Base Class

#include <iostream>
#include <string>
using namespace std;

class MEDIA
{
protected:
    string title;
    float price;

public:
    virtual void display() = 0; // Mandatory: pure virtual function makes it an abstract base class
};

class BOOK : public MEDIA
{
private:
    int pageCount;

public:
    BOOK(string t, float p, int pages)
    {
        title = t;
        price = p;
        pageCount = pages;
    }

    void display()
    { // 'override' keyword removed
        cout << "Book Title: " << title << ", Price: Rs. " << price << ", Pages: " << pageCount << endl;
    }
};

class AUDIO_TAPE : public MEDIA
{
private:
    float playingTime;

public:
    AUDIO_TAPE(string t, float p, float time)
    {
        title = t;
        price = p;
        playingTime = time;
    }

    void display()
    { // 'override' keyword removed
        cout << "Tape Title: " << title << ", Price: Rs. " << price << ", Time: " << playingTime << " mins" << endl;
    }
};

int main()
{
    // Direct object creation using stack allocation avoids pointers and manual 'delete' cleanup
    BOOK b("C++ Programming", 1300, 350);
    AUDIO_TAPE a("C++ Audio", 1250, 45.5);

    b.display();
    a.display();

    return 0;
}