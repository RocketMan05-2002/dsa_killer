// delete from the array

#include<iostream>
using namespace std;

int deletion(int arr[], int n, int val){
	//first find the index of that element
	int index = -1;
	for(int i=0;i<n;i++){
		if(arr[i]==val){
			index = i;
			break;
		}
	}
	
	if(index == -1) return n;
	
	for(int i=index;i<n;i++){
		arr[i] = arr[i+1];
	}
	
	return n-1;
}

int main(){
	int arr [] = {12,24,36,48,60,75,90};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int val;
	cin>>val;
	
	for(auto it:arr) cout<<it<<" ";
	cout<<endl;
	
	int newsize = deletion(arr,n,val);
	
	for(int i=0;i<newsize;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}