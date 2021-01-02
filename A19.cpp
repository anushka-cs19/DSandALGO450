//Merge Intervals

#include<bits/stdc++.h>
using namespace std;

struct interval{
	int s,e;
};

bool compare(interval u, interval v){
	return u.s<v.s;
}

void merge_interval(interval a[], int n){
	
	sort(a,a+n,compare);
	
	int index=0;
	
	for(int i=1;i<n;i++){
		
		if(a[index].e>=a[i].s){
			
			a[index].e=max(a[index].e,a[i].e);
			a[index].s=min(a[index].s,a[i].s);
			
		}
		else{
			
			index++;
			a[index]=a[i];
			
		}
		
	}
	
	for(int i=0;i<=index;i++){
		cout<<"{"<<a[i].s<<","<<a[i].e<<"}"<<" ";
	}
	cout<<endl;
	
}

int main(){
	int n;cin>>n;
	interval a[n];
	int x,y;
	for(int i=0;i<n;i++){
		cin>>x>>y;
		a[i].s=x;
		a[i].e=y;
	}
	merge_interval(a,n);
	return 0;
}
