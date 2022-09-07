//Function Template - Sablon de functie

#include <iostream>
using namespace std;

class Bill {
public:
    Bill(int val) : val {val} {}
    friend ostream& operator << (ostream& os, Bill const& b)
    {
        return os << b.val;
    }

private:
    int val;    
};

// Primary Template
template <class T>   // header template
void Scrie(T a)
{
    cout << a << '\n';
}

int main()
{

    /*
        Compile-time, pe baza sablonului de functie,
        compilatorul genereaza 5 functii:
        void Scrie(int), void Scrie(double), void Scrie(char),
        void Scrie(const char*),  void Scrie(Bancnota)
    */

    Scrie(10);      // void Scrie(int)
    Scrie(10.34);   // void Scrie(double)
    Scrie('A');     // void Scrie(char)
    Scrie("Name");  // void Scrie(const char*)

    Bill b {100};
    Scrie(b);       // void Scrie(Bill)
}