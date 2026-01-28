#include<iostream>
using namespace std;

int binsearch(int arr[], int n, int target){
    int low = 0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]<target) low = mid+1;
        else high = mid-1;
    }
    return -1;
}

int main(){
    int arr[]= {12,24,36,48,56,78,89,90};
    int n = sizeof(arr)/sizeof(arr[0]);

    int val;
    cin>>val;

    int ans = binsearch(arr,n,val);

    cout<<ans;
    return 0;
}