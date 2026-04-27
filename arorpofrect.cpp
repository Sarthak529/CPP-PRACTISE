#include<iostream>
using namespace std;
int main(){
    int x,y,a,p;
    cout<<"Enter lenth of rectangle;";
    cin>>x;
    cout<<"Enter breadth of rectangle:";
    cin>>y;
    
    p=2*(x+y);
    a=x*y;
    cout<<"Area of rectangle is :"<<a<<endl;
    cout<<"Perimeter of rectangle is :"<<p<<endl;
    if (a>p)
    cout<<"Area is greater than perimeter";
    else if (p>a)       
    cout<<"Perimeter is greater than area";
    else    
    cout<<"Area and perimeter are equal";
    
    
}