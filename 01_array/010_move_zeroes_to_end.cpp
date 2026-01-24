// move zeroes to end
// 8 5 0 10 0 20 
// 8 5 20 10 0 0 

#include<iostream>
using namespace std;

void moveZeroesToEnd(int arr[], int n){
	int i=0,j=n-1;
	while(i<j){
		if(arr[i]==0){
			swap(arr[i],arr[j]);
			j--;
		}
		i++;
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