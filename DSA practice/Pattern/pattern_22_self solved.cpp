#include<iostream>
using namespace std;
int main(){
    int row , col , n;

    cin>>n;
    int v=0;
    
    row = n;
    while(row>=1){

        //number print kr lo
        col = 1;
        while(col<=row){
            cout<<col;
            col++;
        }

        // star print kr lo
        int star=1;
        while(star <= v){
            cout<<"*";
            star++;
        }
        //second star prinnt kr lo
        int star2 = 1;
        while(star2<=v){
            cout<<"*";
            star2++;
        }
        v++;

        //second number print kr lo
        int w =1;
        int num2 = row;
        while(num2>=w){
            cout<<num2;
            num2--;
        }
        w++;
        
        cout<<endl;
        row--;
    }
}