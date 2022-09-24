#include<iostream>
using namespace std;

int even_odd(int a){
    //odd
    if(a&1){
        return 0;
    }
    return 1;

}
int main(){
    int a;
    cin>>a;
    int ans = even_odd(a);
    cout<<"anwer is "<<ans<<endl;
}