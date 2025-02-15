#include<bits/stdc++.h>
using namespace std;
int n,x;
bool cmp(int a,int b){
	return abs(x-a)<abs(x-b);
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n>>x;
		int A[n];
		for(int i=0;i<n;i++)cin>>A[i];
		stable_sort(A,A+n,cmp);
		for(int i=0;i<n;i++)cout<<A[i]<<" ";
		cout<<endl;
	}
}
