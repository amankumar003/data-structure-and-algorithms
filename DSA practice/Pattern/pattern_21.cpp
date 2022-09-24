#include<iostream>
using namespace std;

int main(){
    int row , i, space,start,n;
    cin>>n;
    row = 1;
    while(row<=n){
        space = n-row;
        while(space){
            cout<<" ";
            space--;
        }

        i=1;
        while(i<=row){
            cout<<i;
            i++;
        }

        start = row-1;
        while(start){
            cout<<start;
            start--;

        }
        cout<<endl;
        row++;
    } 
}