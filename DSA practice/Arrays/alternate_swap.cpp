#include<iostream>
using namespace std;

void print_array(int arr[], int size){
    for ( int i=0;i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swap_alternate(int arr[], int size){
    for (int i = 0; i<size; i+=2){
        if((i+1) < size)
            swap(arr[i], arr[i+1]);
    }
}

int main(){
    int arr[9]={5,4,7,8,3,2,5,6,1};
    swap_alternate(arr, 9);
    print_array(arr, 9);

}