#include<bits/stdc++.h>
using namespace std;
void sapxep(int a[],int n){
	sort(a,a+n);
	int l=0,r=n-1;
	while(l<=r){
		if(l!=r)cout<<a[r]<<" "<<a[l]<<" ";
		else cout<<a[r];
		--r;++l;
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		sapxep(a,n);
		cout<<endl;
	}
}
