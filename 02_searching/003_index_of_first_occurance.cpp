#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int target){
    int first = -1;
    int low = 0, high= n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==target){
            first = mid;
            break;
        }else if(arr[mid]<target) low = mid+1;
        else high = mid-1;
    }

    while( first > 0 && arr[first-1]==arr[first]){
        first--;
    }

    return first;
}

int main(){
    int arr[]={10,20,20,20,20,30,30,40,40,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);

    int target;
    cin>>target;

    int ans = firstOcc(arr,n,target);
    cout<<ans;
    return 0;
}