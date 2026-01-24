#include<iostream>
using namespace std;
void reverser(int arr[], int n){
    int low= 0, high=n-1;
    while(low<=high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    for(auto it:arr) cout<<it<<" ";
    cout<<endl;

    reverser(arr,n);

    for(auto it:arr) cout<<it<<" ";
    return 0;
}