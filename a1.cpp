#include<bits/stdc++.h> 
using namespace std; 

void nhap(int a[], int n){
	for(int i=0; i<n; i++) cin >> a[i];
}

void xuLy(int a[], int b[], int m, int n){
	int i=0, j=0;
	while(i<m && j<n){
		if(a[i]<b[j]) i++;
		else if(a[i]>b[j]) j++;
		else{
			cout << a[i++] << " ";
			j++;
		}
	
	} 
	cout << endl;
}

int main(){
	
	int m, n;
	cin >> m >> n;
	int a[m], b[n];
	nhap(a, m);
	nhap(b, n);
	sort(a, a+m);
	sort(b, b+n);
	xuLy(a, b, m, n);
	return 0;
}
