// approach is to find the first or last occrance and keep counting until we find the elements following

#include<iostream>
using namespace std;

int occurances(int arr[], int n, int target){
    int first = -1;
    int low = 0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]<target) low = mid+1;
        else if(arr[mid]>target) high = mid-1;
        else{
            if(mid>0 && arr[mid-1]==arr[mid]){
                high = mid-1;
            }else{
                first = mid;
                break;
            }
        }
    }

    //count occurances
    int count = 0;
    while(first<n &&arr[first] == target){
        count++;
        first++;
    }
    return count;
}

int main(){
    int arr[]={10,20,20,20,20,30,30,40,40,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);

    int target;
    cin>>target;

    int ans = occurances(arr,n,target);
    cout<<ans;
    return 0;
}