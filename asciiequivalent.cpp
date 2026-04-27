#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number n:";
    cin>>n;
    int i=65;
    while(i<=n){
        cout<<i<<" "<<(char)i<<endl;
        i++;
    }
}