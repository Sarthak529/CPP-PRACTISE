#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter no of rows:";
    cin>>m;
    cout<<"Enter no of columns:";   
    cin>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            // cout<<"* ";
            // cout<<j<<" ";
            // cout<<i<<" ";
            // cout<<(char)(64+j)<<" ";// for printing A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
      // cout<<(char)(64+i)<<" ";// for printing A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
      cout<<m+1-j<<" ";// for printing 5 4 3 2 1 in first row and 5 4 3 2 in second row and so on
        }
    
        cout<<endl;
    }
} 