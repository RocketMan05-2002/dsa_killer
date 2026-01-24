// second largest in the array


// BRUTE FORCE

#include<iostream>
using namespace std;
int largest(int arr[], int n){
	int max = arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	return max;
}
int seclargest(int arr[], int n){
	if(n<=1) return -1; 
	int max = largest(arr,n);
	int secmax = -1;
	for(int i =0;i<n;i++){
		if(arr[i]!=max && arr[i]>secmax) secmax = arr[i];
	}
	return secmax;
}
int main(){
	int arr[] = {10,405,34,96,750};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int ans = seclargest(arr,n);
	cout<<ans;
	return 0;
}


// EFFICIENT APPROACH

#include<iostream>
using namespace std;
int seclargest(int arr[], int n){
	int secmax = -1;
	int max = arr[0];
	
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			secmax = max;
			max = arr[i];
		}else if(arr[i]>secmax || secmax == -1){
			secmax = arr[i];
		}
	}
	
	return secmax;
}
int main(){
	int arr[] = {12,34,46,57,668,79,90};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int ans = seclargest(arr,n);
	cout<<ans;
	return 0;
}
