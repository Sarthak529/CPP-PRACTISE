#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
 int arr[n]; 
    for(int i=1; i<=n; i++){
        arr[i - 1]= i * i;


    }
    cout<<"Square of first "<<n<<" natural numbers are: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
    
    return 0;
}