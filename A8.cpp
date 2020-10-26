//K’th Smallest/Largest Element in Unsorted Array
#include<bits/stdc++.h>
using namespace std;

kthsmallest(int arr[],int n,int k){
	int max;
	max=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>max)max=arr[i];
	}
	int counter[max+1]={0};
	for(int i=0;i<n;i++){
		counter[arr[i]]++;
	}
	int smallest=0;
	for(int i=1;i<=max;i++){
		if(counter[i]>0){
			smallest += counter[i];
		}
		if(smallest>=k){
			return i;
		}
	}
}

int main(){
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	int ans = kthsmallest(arr,n);
	cout<<ans<<endl;
	return 0;
}
