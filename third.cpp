#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[]=new int[n];
	int odd[]=new int[n];
	int even[]=new int[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++){
		if(a[i]%2==0)
			even[i]=a[i];
		else
			odd[i]=a[i];
	}
	return 0;
}
