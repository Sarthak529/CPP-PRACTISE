#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[n] = {10, 20, 30, 40, 50};
    int x = 20;
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]>x){
            count++;
        }
    }
    cout<<"Number of elements greater than "<<x<<" is: "<<count<<endl;
    return 0;
}