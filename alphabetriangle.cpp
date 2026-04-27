#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter no of sides:";
    cin>>m;
    
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            if(i%2==0){
                cout<<(char)(64+j)<<" ";// for printing A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
            }
            else{
                cout<<j<<" ";
            }
            
        }
        cout<<endl;
    }
}