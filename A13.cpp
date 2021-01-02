//find Largest sum contiguous Subarray [V. IMP]
#include<bits/stdc++.h>
using namespace std;

int findlarsum(int a[], int n){
	int max_end_here=a[0],max_so_far=a[0];
	
	for(int i=1;i<n;i++){
		max_end_here = max(a[i], max_end_here + a[i]);
		max_so_far = max(max_so_far, max_end_here);
	}
	return max_so_far;
}

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		cout<<findlarsum(a,n)<<endl;
	}
	return 0;
}
