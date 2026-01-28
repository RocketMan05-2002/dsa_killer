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

int main(){
    int arr[]={10,20,20,20,20,30,30,40,40,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);

    int target;
    cin>>target;

    int ans = firstOcc(arr,n,target);
    cout<<ans;
    return 0;
}