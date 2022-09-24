#include<iostream>
using namespace std;

int main(){
    int n, row, col;
    cin>>n;
    row = n;
    while(row){
        col = 1;
        while(col<=row){
            cout<<"*";
            col++;
        }
        row--;
        cout<<endl;
    }
}