#include<iostream>
using namespace std;
class Calculator
{
    public:
    void add();
    void sub();
};
int main()


{
    Calculator c1;
    c1.add();
    c1.sub();

    Calculator *c2 = new Calculator();
    c2->add();  
    c2->sub();
}
void Calculator::add()
{
   cout<<"Addition of Numbers"<<endl;
}
void Calculator::sub()
{
   cout<<"Subtraction of Numbers"<<endl;
}  