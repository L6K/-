// Nの要素を0で初期化した後にdiと重なった部分を1に上書きして最後に0だった要素数を取り上げる

#include <bits/stdc++.h>
using namespace std;
int main() {
  int x,n,m,k,y=0;

  int s[100];

  cin >> n >>k; 
//   人数Nとお菓子の種類Kの入力

  for(int i=1;i<=n;i++){

    s[i]=0;

  }
  for(int i=1;i<=k;i++){

    cin >> x;
    // お菓子の個数xの入力


    for(int j=1;j<=x;j++){

      cin >> m;
    //   お菓子を分け与える人の入力

      s[m]=1;

    }
  }

  for(int i=1;i<=n;i++){

    if(s[i]==0){

      y++;

    }

  }

  cout << y << endl;

  return 0;
}