// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number n:";
//     cin>>n;
//     int reverse =0;
 
//     int sum =0;
//     while(n!=0){
//         int ld = n%10;
//             reverse = reverse*10 + ld;
//         sum = sum + ld;
//         n = n/10;
//     }
//     cout<<"sum of digits is: "<<sum*2<<endl;
// }
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter value of n: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        int fact = 1;

        for(int j = 1; j <= i; j++) {
            fact = fact * j;
        }

        cout << i << "! = " << fact << endl;
    }

    return 0;
}