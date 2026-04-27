#include <iostream>
using namespace std;
class Student {
public:
    int x;
    static int count;
};
int Student::count = 7;
int main() {
    Student o1, o2;
    o1.x = 20;
    o2.x = 30;
    o1.count = 200;
    o2.count = 300;
    cout << "o1.x = " << o1.x << endl;
    cout << "o1.count = " << o1.count << endl;
    cout << "o2.x = " << o2.x << endl;
    cout << "o2.count = " << o2.count << endl;
    cout << "Student::count = " << Student::count << endl;
};