#include<iostream>
using namespace std;
    int main (){
      int a,b,c;
      cout<<"enter side a:";
      cin>>a;
      cout<<"enter side b:";
      cin>>b;
      cout<<"Enter the side c:";
      cin>>c;
      // if(a+b>c)
      // cout<<"it is a triangle";
      // else if(b+c>a)
      // cout<<"it is a triangle";
      // else if(c+a>b)
      // cout<<"it is a triangle";
      // else
      // cout<<"not a triangle";
      if (a+b>c && b+c>a && c+a>b)
      cout<<"it is a triangle";
      else  
      cout<<"not a triangle";
    }