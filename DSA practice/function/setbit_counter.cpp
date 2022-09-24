#include<iostream>
using namespace std;

int set_bit_counter(int n){
    int count = 0;
    while(n!=0){
        if(n|1==1){
            count++;
        }

        n>>1;
    }
    return count;
}
int main(){

    int a , b;
    cin>>a>>b;
    int ans = set_bit_counter(a)+set_bit_counter(b);
    cout<<"total number of set bit is "<<ans<<endl;



}