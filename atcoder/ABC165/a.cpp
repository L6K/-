#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
  int k,a,b;
  cin >> k;
  cin >> a >> b;
  
  if(b/k*k>=a)
    cout << "OK" << endl;
  else
    cout << "NG" << endl;
}