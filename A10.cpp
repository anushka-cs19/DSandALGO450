//Move all the negative elements to one side of the array 
#include<bits/stdc++.h>
using namespace std;

void movenp(int a[], int n){
	int j=n-1,i=0;
	while(i<=j){
		if(a[i]>0){
			if(a[j]>0){
				j--;
			}
			else{
				swap(a[i],a[j]);
				i++;j--;
			}
		}
		else{
			i++;
		}
	}
}

int main(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	movenp(a,n);
	for(int i=0;i<n;i++)cout<<a[i]<<" ";
	return 0;
}
