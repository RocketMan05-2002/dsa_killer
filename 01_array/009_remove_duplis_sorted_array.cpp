// remove duplicates from sorted array

// 10 20 20 30 30 30 30 40 40 40 50
// 10 20 30 40 50

#include<iostream>
using namespace std;

int removeDuplicates(int arr[], int n){
	int i=0, j=0;
	int maxlen = 1;
	
	while(j<=n){
		if(arr[j]!=arr[i]){
			i++;
			swap(arr[i],arr[j]);
			maxlen++;
		}
		j++;
	}
	
	return maxlen;
}

int main(){
	int arr[] = {10,20, 20, 30, 30, 30, 30, 40, 40, 40, 50};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	for(auto it:arr) cout<<it<<" ";
	cout<<endl;
	
	int newsize = removeDuplicates(arr,n);
	for(int i=0;i<newsize;i++){
		cout<<arr[i]<< " ";
	}
	cout<<endl;
}