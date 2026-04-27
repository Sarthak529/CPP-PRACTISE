#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[n] = {10, 20, 30, 40, 50};
    for(int i=0; i<n; i++){
       if(i%2==0 || i==0){
           arr[i] += 10;
       }
           else 
            arr[i] *= 2;
    }
cout<<"Elements of the array are: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
 

}