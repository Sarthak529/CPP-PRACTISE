#include<iostream>
using namespace std;

class Auction
{
            public:
            int price = 500;
            void output()
            {
                cout<<"Price value for auction ="<<price;
            }

};
int mian()
{
    Auction a1;
    a1.output();
}