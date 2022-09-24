#include<iostream>
using namespace std;

int n ;
// second loop is fpor coloumn
int main(){
    cin>>n;
    int count = 0;
    for (int i=1; i<=n; i++){
        for ( int j = 1 ; j<=i; j++){
            cout<<count+1;
            count++;
        }

        cout<<endl;
    }
}