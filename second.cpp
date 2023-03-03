#include<iostream>
using namespace std;
int main(){
	int n,sum=0;
	cin>>n;
	int a[]=new int[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		sum=sum+a[i];
	cout<<sum<<endl;
	return 0;
}
