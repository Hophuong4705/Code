#include<iostream>
using namespace std;
int main(){
	int k, m, j , i, h;
	cin>>k>>m>>j>>i>>h;
	int sum = k*60*(m+j) - (i*60+h);
	cout<<sum;
}
