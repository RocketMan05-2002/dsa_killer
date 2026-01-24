#include<iostream>
using namespace std;

bool isPal(int arr[], int n){
    int i=0, j= n-1;
    while(i<=j){
        if(arr[i]!= arr[j]) return false;
        i++;
        j--;
    }
    return true;
}

int main(){
    int arr[]={1,2,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    if(isPal(arr,n)) cout<<"Yes";
    else cout<<"No";
}