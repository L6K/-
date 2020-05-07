//展望台 i から一本の道を使って辿り着ける展望台の標高の最大値よりも展望台 i の標高が高い


#include <iostream>
#include <algorithm>
using namespace std;
#define N 100010
int main()
{
    int n, m, h[N], ma[N]; //nは展望台の数　mは道の数　h[N]は各展望台の高さ　ma[N]はある展望台に対して最も高い展望台
    for (int i = 1; i <= n; i++)
    {
        cin >> h[i]; //各展望台の数を入力　添え字と展望台のナンバリングを合わせてる
        ma[i] = 0; //ma[N]をそれぞれ初期化
    }
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b; //道のスタートとゴールの展望台をそれぞれ入力
        ma[a] = max(ma[a], h[b]); //ある展望台に対して既に比較されてる展望台より高ければma配列を上書き
        ma[b] = max(ma[b], h[a]);
    }
    int ans = 0; //ansが良い展望台の数
    for (int i = 1; i <= n; i++)
    {
        ans += h[i] > ma[i]; //h[i]がma[i]より高ければansをインクリメント
    }
    cout<<ans<<endl;
}
