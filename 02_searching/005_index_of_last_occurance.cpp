#include<iostream>
using namespace std;

int lastOcc(int arr[], int n, int target){
    int low = 0, high = n-1;
    int last = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]<target) low=mid+1;
        else if(arr[mid]>target) high = mid-1;
        else{
            last = mid;
            break;
        }
    }
    while(last<n-1 && arr[last+1]==arr[last]){
        last++;
    }
    return last;
}

int main(){
    int arr[]={10,20,20,20,20,30,30,40,40,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);

    int target;
    cin>>target;

    int ans = lastOcc(arr,n,target);
    cout<<ans;
    return 0;
}