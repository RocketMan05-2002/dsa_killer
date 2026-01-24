// 1 2 3 4 5
// 2 3 4 5 1

#include<iostream>
using namespace std;

void leftBy1(int arr[], int n){
	int temp = arr[0];
	for(int i=1;i<n;i++){
		arr[i-1]= arr[i];
	}
	arr[n-1] = temp;
}

int main(){
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	for(auto it:arr) cout<<it<<" ";
	cout<<endl;
	
	leftBy1(arr,n);
	
	for(auto it:arr) cout<<it<<" ";
	return 0;
}