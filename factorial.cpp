#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number n:";
    cin>>n;
    for(int j=1; j<=n; j++){
        int product =1;
        for(int i=1; i<=j; i++){
            product *= i;
        }
        cout<<"Factorial of "<<j<<" is: "<<product<<endl;
    }
}