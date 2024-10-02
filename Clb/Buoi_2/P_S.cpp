#include<iostream>
using namespace std;
int main(){
	double d, r; 
	cin>>d>>r;
	double N, Q;
	if(d==r){
		N = d*4;
		Q = d*d;
	}
	else{
		N = (d+r)*2;
		Q = d * r;
	}
	cout<<N<<Q;
	return 0;
}
