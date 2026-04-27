#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter first no:";
    cin>>a;
    cout<<"Enter the second no:";
    cin>>b;
    cout<<"Enter third no:";
    cin>>c;
    if (a>b && a>c)
    cout<<"a is greatest";
    else if (b>a && b>c)
     cout<<"b is greatest";
     else 
     cout<<"c is greatest";
}