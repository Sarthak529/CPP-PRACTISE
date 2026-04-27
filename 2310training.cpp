#include <iostream>
using namespace std;
class Parent {
public:
    int pvar;
    Parent()
    {
        pvar = 0;
        cout << "Parent default constructor " << endl;
    }
    Parent(int p)
    {
        pvar = p;
        cout << "Parent parameterized constructor " << endl;
    }
};

class Child : public Parent
{
public:
    int cvar;
    Child(int p, int c) : Parent(p)
    {
        cvar = c;
        cout << "Child parameterized constructor " << endl;
    }

};
int main()
{
    Child *c = new Child(2, 4);
    cout <<  c->pvar << endl;
    cout <<  c->cvar << endl;
};