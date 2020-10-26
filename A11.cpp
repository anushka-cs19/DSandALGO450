//Find the Union and Intersection of the two sorted arrays.
#include<bits/stdc++.h>
using namespace std;

int findu(int a[], int x){
	map<int,int> m1;
	for(int i=0;i<x;i++){
		m1[a[i]]++;
	}
	return m1.size();
}

int main(){
	int n,m;cin>>n>>m;
	int a[n+m];
	for(int i=0;i<n+m;i++)cin>>a[i];
	cout<<findu(a,n+m)<<endl;
	return 0;
}
