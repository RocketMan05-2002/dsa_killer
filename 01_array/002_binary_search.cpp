// binary search

#include<bits/stdc++.h>
using namespace std;

int binsearch(int arr[], int n, int x){
	sort(arr,arr+n);
	int low = 0, high = n-1;
	while(low<=high){
		int mid = (low+high)/2;
		if(arr[mid] == x) return mid;
		else if(arr[mid]<x) low = mid+1;
		else high = mid-1;
	}
	
	return -1;
}


int main(){
	int arr []={10,20,45,32,30,90,84};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x;
	cin>>x;
	int ind = binsearch(arr,n,x);
	cout<<ind;
	return  0;
}