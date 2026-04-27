#include<iostream>
using namespace std;
class Parent 
{
    public:
  virtual  void show()
  {
      cout << "Alto" << endl;
  }
};
class Child : public Parent
{public:
    void show()
    {
        cout << "fortuner" << endl;
    }

};
int main()
{
    Parent *p1 = new Parent();
    p1->show();   
    Child *c1 = new Child();
    c1->show();
    Parent *p2 = new Child();
    p2->show();

} 