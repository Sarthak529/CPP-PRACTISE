#include <iostream>
using namespace std;

// class Payment
// {
//     public:
//     virtual void pay(double amount)=0;
// } ;
// class CreditCardPayment: public Payment
// {
//     public:
//     void pay(double amount) override
//     {
//         cout<<"Paid "<<amount<<" using Credit Card"<<endl;
//     }
// };
// int main()
// {
//     Payment *p = new CreditCardPayment();
//     p->pay(500);
//     delete p;

//     Payment *p2 = new CreditCardPayment();
//     p2->pay(300);
    
// }
// asignment 
class Transport
{
    public:
    virtual void move()=0;
};
class CarTransport: public Transport
{
    public:
    void move() override
    {
        cout<<"Car is moving"<<endl;
    }
};
class BusTransport: public Transport
{
    public:
    void move() override
    {
        cout<<"Bus is moving"<<endl;
    }
};
int main()
{
    Transport *t1 = new CarTransport();
    t1->move();
    delete t1;

    Transport *t2 = new BusTransport();
    t2->move();
    delete t2;
}   