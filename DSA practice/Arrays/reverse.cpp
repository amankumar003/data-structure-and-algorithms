#include<iostream>
using namespace std;

void print_array(int arr[], int size){
    for ( int i=0;i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverse(int arr[], int size){
    int start= 0;
    int end = size -1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[6]={ 3,5,78,2,6,9};
    reverse(arr,6);
    print_array(arr,6);
    
    return 0;
}