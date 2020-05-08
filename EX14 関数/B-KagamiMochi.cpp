#include <bits/stdc++.h>
using namespace std;
vector<int> dia; // 餅の直径
int N; //餅の数
 int main(){
     cin >> N;
     dia.resize(N);
     for(int i=0; i<N; i++){
         cin >> dia[i];
     }
     sort(dia.begin(),dia.end());
     dia.erase(unique(dia.begin(),dia.end()),dia.end());
    
    cout << dia.size() << endl;
 }