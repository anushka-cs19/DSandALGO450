//find duplicate in an array of N+1 Integers

#include<bits/stdc++.h>
using namespace std;

int duplicate(int a[], int n){
	
	int flag=0;
	
	for(int i=0;i<n;i++){
		
		if(a[a[i]%n]>=n){
			
			if(a[a[i]%n]<2*n){
				cout<<a[i]%n<<" ";
				flag=1;
			}
		}
		a[a[i]%n]+=n;
	}
	if(flag==0){
		cout<<-1<<endl;
	}
	else{
		cout<<endl;
	}
}

int main(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	duplicate(a,n);
	return 0;
}

