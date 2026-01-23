
// O(n) linear search takes time to search
// searching in an array

#include<iostream>
using namespace std;

int search(int arr [], int n, int x){
	for(int i=0;i<n;i++){
		if(arr[i]==x){
			return i;
		}
	}
	return -1;
}

int main(){
	int arr[] = {1,2,3,4,6,7,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x;
	cin>>x;
	int ans = search(arr,n,x);
	cout<<ans<<endl;
	return 0; // to indicate that the program has been terminated
}