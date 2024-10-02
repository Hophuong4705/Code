#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t, k, s, m;
    cin >> n >> t >> k; 
    s = n * t;          
    m = s * k / 100;    

  if(m<200000){
  	cout<<"Cac dom con can can mua them ve de Jack mua qua cho be Sol!";
  }
  else if(m <= 500000){
  	cout<<"Jack se mua qua cho be Sol vua phai!";
  }
  else{
  	cout << "Jack se mua qua cho be Sol rat gia tri!";
  }
//    if (m > 500000) {
//        cout << "Jack se mua qua cho be Sol rat gia tri!";
//    } else if (m > 200000 && m <= 500000) {
//        cout << "Jack se mua qua cho be Sol vua phai!";
//    } else if(m < 200000){
//        cout << "Cac dom con can can mua them ve de Jack mua qua cho be Sol!";
//    }
    
    return 0;
}