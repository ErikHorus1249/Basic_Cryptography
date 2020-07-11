#include<bits/stdc++.h>
using namespace std;

int main()

{
	int p=2357;
	int q=2551;
	long long n=p*q;
	long e=422191;
	
	int m=3650502;
	
	int b=1;
	if(e==0) return b;
	long long A=m;
	if(e&1){		
		b=m;
	}
	
	
	while(e>0){
		
		A=(A*A)%n;
		e=e>>1;
		
		if(e&1){			
			b=A*b%n;
		}
		
		
	}
	
	cout<<"m = "<<b;
}
	
