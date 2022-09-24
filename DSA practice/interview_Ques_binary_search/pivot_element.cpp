#include<iostream>
using namespace std;

int get_pivot(vector<int>& arr, int n){
    int s= 0, e = n-1;
    int mid = s+(e-s)/2;
    while(s< e){sss
        if(arr[mid]>=arr[0])
            s = mid+1;
        else 
            e = mid;
        mid = s+ (e-s)/2;
        return s;
    }
}

int binary_search(vector<int>& arr ,int s , int e,int key){
    //int s= 0, e = n-1;
    int mid = s+(e-s)/2;
    while(s< = e){
        
        if (arr[mid] == key){
            
            return mid;
         }
        else if ( arr[mid]< key){
            s = mid+ 1;
        }
        else
            e = mid - 1;
        mid = s+ ( e- s)/2;
    }
    return - 1;
}
int findPosition(vector<int>& arr, int n, int k)
{
    int pivot = get_pivot(arr, n);
    if (k >= arr(pivot) && k <= arr[n-1]){
        return binary_search(arr, pivot , n-1, k);
        
    }
    else
        return binary_search(arr, 0, pivot-1, k);
}
