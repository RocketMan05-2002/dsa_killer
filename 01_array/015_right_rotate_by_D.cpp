// right rotate by D
#include<iostream>
using namespace std;

void rightbyD(int arr[], int n, int D){
	D = D % n;
	int temp[D];
	for(int i=0;i<D;i++) temp[i] = arr[n-D+i]; // 4 - 5
	for(int i=n-1;i>=D;i--) arr[i] = arr[i-D];
	for(int i=0;i<D;i++) arr[i]=temp[i];
	
}


int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int d; cin>>d;
    rightbyD(arr,n,d);
    for(auto it:arr) cout<<it<<" ";
}