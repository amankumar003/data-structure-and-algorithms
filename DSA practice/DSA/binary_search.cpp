#include<iostream>
using namespace std;

int binarysearch( int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;


    while(start<= end){
        
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            start = mid+1;
        }
        else
            end = mid-1;
        mid = start + (end - start)/2;
    }
    return -1;
}
int main(){
    int arr[8]= {1,4,6,7,8,9,10,11};
    int index = binarysearch(arr, 8, 10);
    cout<<"Your search index is "<<index<<endl;
    cout<<"Your search index is "<<index<<endl;
    

}