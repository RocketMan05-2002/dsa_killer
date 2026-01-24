// move zeroes to end in order maintained of numbers
// 8 5 0 10 0 20 
// 8 5 10 20 0 0 

#include<iostream>
using namespace std;

void moveZeroesToEnd(int arr[], int n){
	int count =0;
	for(int i=0;i<n;i++){
		if(arr[i]!=0){
			swap(arr[i],arr[count]);
			count++;
		}
	}
}

int main(){
	int arr[]={8,5,0,10,0,20};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	for(auto it:arr) cout<<it<<" ";
	cout<<endl;
	
	moveZeroesToEnd(arr,n);
	
	for(auto it:arr) cout<<it<<" ";
	return 0;
}