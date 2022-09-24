#include <iostream>

using namespace std;

int main()
{
    int n =10;
    //cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int maxlen=0,currlen=0;
    //for(int i=0;arr[i]<='\0';i++)
    int st=0,maxst=0;
    int i=0;
    while(1)
    {
        if(arr[i]==' '||arr[i]=='\0')
        {
            if(currlen>maxlen)
            {
                maxlen=currlen;
                maxst=st;
            }
            currlen=0;
            st=i+1;
        }
        else
        {
            currlen++;
        }
        if(arr[i]=='\0')
        {
            break;
        }
        i++;
    }
    for(i=0;i<maxlen;i++)
    {
        cout<<arr[i+maxst]<<endl;
    }
    cout<<maxlen<<endl;

    return 0;
}