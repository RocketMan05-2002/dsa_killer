#include<iostream>
using namespace std;

int BS(int arr[], int low, int high, int target){
    if(low>high)  return -1;
    int mid = (low+high)/2;
    if(arr[mid]==target) return mid;
    else if(arr[mid]<target) return BS(arr,mid+1,high,target);
    else return BS(arr,low,mid-1,target);
}

int binsearch(int arr[], int n, int target){
    return BS(arr,0,n-1,target);
}

int main(){
    int arr[]={12,24,36,48,60,72};
    int n = sizeof(arr)/sizeof(arr[0]);

    int target;
    cin>>target;

    int ans = binsearch(arr,n,target);
    cout<<ans;
    
    return 0;
}