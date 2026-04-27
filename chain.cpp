#include<iostream>
using namespace std;

class Parent{
    int x;
public:
    Parent(int i){
        x =i;
        cout << "parent parametterized constructor" << endl;
    }
   
};
class Child : public Parent
{
    public:
    Child(int x):Parent(x){
        cout << "child parameterized constructor" << endl;
    }
    

};
    
int main()
{
     
     Child *c=new Child(123);
}
