/*
    Left Value Reference    &
    Right Value Reference   &&

    &  - poate fi legat NUMAI la l-values
    && - poate fi legat NUMAI la r-values
*/

#include <iostream>
using namespace std;

struct C {
    C()
    {
        cout << "C()\n";
    }

    ~C()
    {
        cout << "~C()\n";
    }
};

void F (const int& a)
{
    cout << __PRETTY_FUNCTION__ << '\n';
}

void F (int& a)  // & - Left Value Reference
{
    cout << __PRETTY_FUNCTION__ << '\n';
}

void F (int&& a)  // && - Right Value Reference
{
    cout << __PRETTY_FUNCTION__ << '\n';
}

int main()
{
    int x = 10; // x -> l-value
    F(x);

    F(100); // 100 = r-value
}