#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n, ans ;
    cin>>n;
    for( int i = 0 ; i < n ; i++){
        int bit  = n &1;
        if(n&1==1){
            ans = 0;
        }
        else if (n&1==0)
        {   
            ans = 1;
        }
        ans = ans +1;
        
        ans = (bit*pow(10,i)+ans);
        cout<<ans;
    }
}