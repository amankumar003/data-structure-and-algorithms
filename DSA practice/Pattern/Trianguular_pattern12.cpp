#include<iostream>
using namespace std;

int n;
int main(){
    cin>>n;
    
    for( int i=1; i<=n;i++){
        for( int j=1;j<=i; j++){
            char ch = 'A'+i-1;
            cout<<ch;
           
        }
        cout<<endl;

    }
}