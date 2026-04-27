#include<iostream>
using namespace std;
int main(){
    int arr[5];
    // arr[0] = 10;
    // arr[1] = 20;    
    // arr[2] = 30;
    // arr[3] = 40;
    // arr[4] = 50;
    for(int i=0; i<5; i++){
        cout<<"Enter element";
        cin>>arr[i];
    }
cout<<"Elements of the array are: "<<endl;
    for(int i=0; i<5; i++){
        cout<<arr[i]<<endl;
    }
    arr[0]=1500;
    cout<<endl;
    for(int i=0; i<5; i++){
        cout<<arr[i]<<endl;
    }

}
