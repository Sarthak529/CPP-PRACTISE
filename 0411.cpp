#include <iostream>
using namespace std;
int main() {
    int* ptr = new int;
    *ptr = 39;
  cout<<"values: "<<*ptr<<endl;
  cout<<"address: "<<ptr<<endl;
  cout<<"Before Deletion ="<<*ptr<<endl;
    delete ptr;
    cout<<"After Deletion ="<<*ptr;
}
