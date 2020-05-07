#include <bits/stdc++.h>

using namespace std;

int main (){
    int n,k,d;   
    cin >> n >> k;
    vector<int> b;
    b.resize(n);
    for(int s=0;s<n;s++){
        b[s]=s+1; 
        // 0からnまでの要素をvector bに代入
    }
    for(int i=0;i<k;i++){
        cin >> d;
    vector<int> a;
    a.resize(d);
    int j=0;
    for(;j<d;j++){
        cin >> a[j];
        // dの数だけvector aに入力
        for(int f=0;f<n;f++)
        if(a[j]==b[f]){

            b.erase(b.begin()+f);
            // 照合した要素を削除

        }

    }

}

int size = b.size();

cout << size << endl;
// 残った要素数を出力

return 0;
}