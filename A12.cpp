//Write a program to cyclically rotate an array by one.
#include<bits/stdc++.h>
using namespace std;

void cyclerot(int a[], int n){
	int temp=a[n-1];
	for(int i=n-2;i>=0;i--){
		a[i+1]=a[i];
	}
	a[0]=temp;
}

int main(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	cyclerot(a,n);
	for(int i=0;i<n;i++)cout<<a[i]<<" ";
	return 0;
}
