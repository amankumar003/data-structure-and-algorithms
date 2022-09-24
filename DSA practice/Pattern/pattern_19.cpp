#include<iostream>
using namespace std;

int main(){
    int n, row, col;
    cin>>n;
    row = 1;
    
    while(row<=n){
        int space;
        while (space<=row-1){
            cout<<" ";
            space++;
        }
        
        int star = n-row +1;
        while (star){
            cout<<"*";
            
        }
        row++;
        cout<<endl;


    }
   
}