#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m,n;
	cout<<"Enter m and n:\n";
	cin>>m>>n;
	int a[m][n];
	
	cout<<"Enter matrix:\n";
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	cout <<"\nGiven matrix: " << endl;
 	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"Required matrix:\n";
	for(int j=n-1;j>=0;j--){
		for(int i=0;i<m;i++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
	
}
