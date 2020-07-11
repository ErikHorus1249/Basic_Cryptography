#include<bits/stdc++.h>
using namespace std;


int main()
{
	int x2=1;
	int x1=0;
	int y2=0;
	int y1=1;
	int p=2357;
	int q=2551;
	long long e=3674911;
	long long e1 = e;
	long long d;
	
	int h,r,y,x;
	
	long long t=(p-1)*(q-1);// BCNN(p-1, q - 1)
	long long t1 = t;
	
	while(t>0){
		h= e/t;
		r=e-h*t;
		x=x2-h*x1;
		y=y2-h*y1;
		e=t;
		t=r;
		x2=x1;
		x1=x;
		y2=y1;
		y1=y;
	}
	d=x2;
	cout<<d<<endl;
	cout<<y<<endl;
	cout <<"d*e : "<< d*e1 <<endl;
	cout <<"d*e mod phi : " << d*e1 % t1;
	
	
	
	
}

