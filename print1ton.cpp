#include<iostream>
using namespace std;
void print(int n){
    if (n == 0) // base case to stop the recursion
        return;
          print(n-1); 
    cout<<n<<endl;
  
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    print(n);
} 
