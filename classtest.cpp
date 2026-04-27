#include<iostream>
using namespace std;
 int count = 0;
class Test {
public:
    Test() {
        count++;
         cout<<"No. of object created "<<count<<endl;
    }
    ~Test() {
        cout<<"No. of object destroyed "<<count<<endl;
        count;
    }
 

};
int main() {
    Test *t1 = new Test();
    Test *t2 = new Test();
    cout<<"Main is running "<<endl;
    delete t1;
    delete t2;
    cout<<"Main completed "<<endl;
    return 0;
}
