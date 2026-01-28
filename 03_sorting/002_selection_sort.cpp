#include<iostream>
using namespace std;
void selectionSort(int arr[], int n){
	
	for(int i=0;i<n-1;i++){
		int mini = i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[mini]) mini=j;
		}
		swap(arr[i],arr[mini]);
	}

}
int main(){
    int arr[]={5,1,4,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(auto it:arr) cout<<it<<" ";
    cout<<endl;

    selectionSort(arr,n);

     for(auto it:arr) cout<<it<<" ";
     return 0;
}