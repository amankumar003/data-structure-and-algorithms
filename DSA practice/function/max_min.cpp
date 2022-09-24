#include<iostream>
using namespace std;
int main(){
    int max = 0, min = 0;
    int array[5] = {5,7,3,9,5};
    for ( int i =0; i<4; i++){
        if(array[i]>array[i+1]){
            max = array[i];
        }
        else
            min = array[i];

        

    }
    cout<<max<<" "<<min<<endl;
}