#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number n:";
    cin>>n;
    int count =0;
    while(n!=0){
        n=n/10;
        count++;
    }
    cout<<"number of digits in the number is: "<<count;
}