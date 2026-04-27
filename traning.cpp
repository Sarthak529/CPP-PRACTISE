#include<iostream>
using namespace std;
class Box 
{
    private:
        int *data;
    public:
        Box(int value)
        {
            data =  new int;
            *data = value;
            cout<<*data<<"created"<<endl;
        }

};