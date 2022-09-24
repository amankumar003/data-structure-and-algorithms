#include<iostream>
using namespace std;

int main(){
    int count =0 ,n, i ,j;
    cin>>n;
    i= 1;

    while(i<=n){
        j=1;
        while( j<=n){
            cout<<count+1<<" ";
            count= count+1;
            j++;
            
        }
        cout<<endl;
        i++;

    }
    

}
