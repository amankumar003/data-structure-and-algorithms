#include <iostream>
using namespace std;
int firstOcc(int arr[], int size, int k)
{
    int start = 0;

    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans =-1;
    while (start <= end)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            end = mid - 1;
        }

        else if (arr[mid] < k)
        {
            start = mid + 1;
        }
        else if ( arr[mid]>k){
            end = mid - 1;
        }
            
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int k)
{
    int start = 0;

    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans =-1;
    while (start <= end)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            start = mid +1;
        }

        else if (arr[mid] < k)
        {
            start = mid + 1;
        }
        else if ( arr[mid]>k){
            end = mid - 1;
        }
            
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int arr[5] = {1, 2, 3, 3, 5};
    cout << " First occurence of 2 is " << firstOcc(arr, 5, 3)<<endl;
    cout << " last occurence of 2 is " << lastOcc(arr, 5, 3);
    return 0;
}