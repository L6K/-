//問題: https://atcoder.jp/contests/abc088/tasks/abc088_b

//Aliceは残ったカードの中で一番数字の大きいカードを取り続ける
#include<bits/stdc++.h>
using namespace std;

vector <int> card; //カード
int N; //カードの枚数

int main(){
    int as=0,sum=0; //asはAliceのスコア、sumは合計スコア
    int cnt=0;
    cin >> N;
    card.resize(N);
    for(auto v : card){ //cin >> vでcardの要素に格納されたわけではない
        cin >> v;
        card[cnt]=v;
        cnt++;
        sum+=v;
    }
    sort(card.begin(),card.end()); //カードを昇順にソート
    for(int i=N-1; 0<=i; i-=2){
        as+=card[i];
    }
    cout << as*2-sum << endl;
}


