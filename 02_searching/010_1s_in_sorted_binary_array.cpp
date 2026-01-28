#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int target){
    int low = 0 , high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]<target) low = mid+1;
        else if(arr[mid]>target) high = mid-1;
        else{
            if(mid>0 && arr[mid-1]==arr[mid]) high = mid-1;
            else return mid;
        }
    }
    return -1;
}

int ones(int arr[], int n){
    int first = firstOcc(arr,n,1);
    return (n-1-first+1);
}

int main(){
    int arr[]={0,0,0,0,0,1,1,1,1,1,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int ans = ones(arr,n);
    cout<<ans;
    return 0;
}