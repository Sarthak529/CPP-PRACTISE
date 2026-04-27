#include<iostream>
using namespace std;
int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/4;
    int mx = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>mx){
            mx = arr[i];
        }
    }
    cout<<"Maximum element in the array is: "<<mx<<endl;
    return 0;
}