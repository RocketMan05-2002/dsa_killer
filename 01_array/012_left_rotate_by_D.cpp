#include<iostream>
using namespace std;

void leftByD(int arr[], int n, int D){
    D= D%n;
    int temp[D];
    for(int i=0;i<D;i++) temp[i]=arr[i];
    for(int i=D;i<n;i++) arr[i-D] = arr[i];
    for(int i=0;i<D;i++) arr[n-D+i] = temp[i];
}

int main(){
    int arr[]= {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int D;
    cin>>D;

    for(auto it:arr) cout<<it<<" ";
    cout<<endl;

    leftByD(arr,n,D);

    for(auto it:arr) cout<<it<<" ";
    return 0;
}