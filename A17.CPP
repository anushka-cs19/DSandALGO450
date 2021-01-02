//Merge 2 sorted arrays without using Extra space.

#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int b[], int n, int m){
	
	//find maximum element from a and b
	int mx=0;
	for(int i=0;i<n;i++){
		mx=max(mx,a[i]);
	}
	for(int i=0;i<m;i++){
		mx=max(mx,b[i]);
	}
	//increase it by 1 so that maximum value is not completely divisible
	mx++;
	int i=0,j=0,k=0;
	//operate on all the elements to put them at place 
	while(i<n && j<m && k<(n+m)){
		
		int en1=a[i]%mx;
		int en2=b[j]%mx;
		
		if(en1<=en2){
			
			if(k<n){
				a[k]+=(en1*mx);
			}
			else{
				b[k-n]+=(en1*mx);
			}
			i++;
			k++;
			
		}
		else{
			
			if(k<n){
				a[k]+=(en2*mx);
			}
			else{
				b[k-n]+=(en2*mx);
			}
			j++;
			k++;
			
		}
		
	}
	
	while(i<n){
		
		int el=a[i]%mx;
		if(k<n){
			a[k]+=(el*mx);
		}
		else{
			b[k-n]+=(el*mx);
		}
		i++;
		k++;
		
	}
	
	while(j<m){
		
		int el=b[j]%mx;
		if(k<n){
			b[k]+=(el*mx);
		}
		else{
			b[k-n]+=(el*mx);
		}
		j++;
		k++;
		
	}
	
	for(int i=0;i<n;i++){
		a[i]=a[i]/mx;
	}
	for(int i=0;i<m;i++){
		b[i]=b[i]/mx;
	}
	return;
}

int main(){
	int n,m;cin>>n>>m;
	int a[n],b[m];
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<m;i++)cin>>b[i];
	merge(a,b,n,m);
	for(int i=0;i<n;i++)cout<<a[i]<<" ";
	cout<<endl;
	for(int i=0;i<m;i++)cout<<b[i]<<" ";
	cout<<endl;
	return 0;
}

