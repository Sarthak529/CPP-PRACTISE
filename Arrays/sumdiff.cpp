#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[n] = {10, 20, 30, 40, 50};

    int sum1 = 0;
    int sum2 = 0;
    for(int i=0; i<n; i++){
        if(i%2==0 || i==0){
            sum1 += arr[i];
        }
        else 
            sum2 += arr[i];
            
        }
    
    cout<<"Difference of sum of even indexed elements and odd indexed elements is: "<<sum1-sum2<<endl;
    return 0;
}