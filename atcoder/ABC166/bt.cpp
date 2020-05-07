// 模範解答
#include<bits/stdc++.h>
using namespace std;

int N , K;
vector<int> d; //dはお菓子の個数
vector<vector<int>> A; //Aはお菓子を分け与えられるぬすけ君

void input(){
    cin >> N >> K;
    d.resize (K);
    A.resize(K,vector<int>()); //K個の要素数,各々にvectorを挿入することで多次元配列に→ネストする為
    for(int i = 0; i < K; i++){
        cin >> d[i];
        A[i].resize(d[i]);
        for(int j = 0; j < d[i]; j++){
            cin >> A[i][j]; //i種類目のお菓子のj個目を入力　jがインクリメントされるのでiではなくjに注目するべき
        }
    }
}
//Aを多次元配列にすることでinput関数に一通り入力してからAを用いてまとめて計算して出力できる
void solve() {
    int ans = 0;
    for(int i = 1; i <= N; i++) //人数分ループ 1人目、2人目...N人目に割り当てられるお菓子がないか全探索

    {
        bool have = false;
        for(auto v : A) //Aは(K,d[i])という形である。ここではvに1からKまでのお菓子の種類が代入される
        {
            for(auto p : v) //ここでpに代入されるものはvector Aのd[i]　d[1]は割り当てられるすぬけ君　i回ループされる
            {
                if(p == i)have = true; //添え字iの要素pがi(ブロックスコープ、配列の要素とは別モン)の場合haveにtrueを代入
            }
        } //範囲for文
        if(!have) ans++; //割り当てられるお菓子がない場合カウントをインクリメント
    }
    cout << ans << endl; 
}

int main(){
    input();
    solve();
    return 0;
}