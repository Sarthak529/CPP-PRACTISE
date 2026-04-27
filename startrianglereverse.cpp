#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter no of rows:";
    cin>>m;
   
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m+1-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}