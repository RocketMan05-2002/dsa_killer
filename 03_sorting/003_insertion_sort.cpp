#include<iostream>
using namespace std;
//keep swapping left until you find bigger element
void insertionSort(int arr[], int n){
    for(int i=1;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}
int main(){
    int arr[]={5,1,4,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(auto it:arr) cout<<it<<" ";
    cout<<endl;

    insertionSort(arr,n);

     for(auto it:arr) cout<<it<<" ";
     return 0;
}