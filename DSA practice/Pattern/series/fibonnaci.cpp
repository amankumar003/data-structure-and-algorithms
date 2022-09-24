#include<iostream>
using namespace std;
int main(){
    int a= 0;
    int n,b=1;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i =0; i<n; i++){
        int sumnum = a+b;
        cout<<sumnum<<" ";
        a = b;
        b = sumnum;
    }
}