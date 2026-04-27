#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number n:";
    cin>>n;
    // for(int i=1;i<=2*n-1;i=i+2){
    //     cout<<i<<" ";
    // }method 1
        // for(int i=1;i<=n;i++){
        //     cout<<2*i-1<<" ";
        // } methd 2
        int a =1;
        for(int i=1;i<=n;i++){
            cout<<a<<" ";
            a=a+2;
        } 
}