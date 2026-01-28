#include<bits/stdc++.h>
using namespace std;

int maxLength(int arr[], int n){
	if(n==0) return 0;
    int i=0, j=0;
    int maxlen = INT_MIN;
    while(j<=n-1){
        int len = 0;
        while(arr[i]==arr[j]){
            len++;
            j++;
        }
        maxlen = max(len,maxlen);
        i=j;
    }
    return maxlen;
}

int main(){
    int arr[]={};
    int n = sizeof(arr)/sizeof(arr[0]);

    int ans = maxLength(arr,n);
    cout<<ans;
    return 0;
}