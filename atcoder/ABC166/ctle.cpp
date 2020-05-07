#include<bits/stdc++.h>
using namespace std;

int  N, M; //Nは展望台の数　Mは道の本数
vector<int> h;
vector<pair<int,int>> road;


void input(){
    cin >> N >> M;
    h.resize(N);
    for(int i = 0 ;i<N; i++ ){
        cin >> h[i] ; //各展望台の標高を入力
    }
    road.resize(M,pair<int,int>());
    for(int i=0;i<M;i++){
        int ra,rb;
        cin >> ra >> rb;
        road[i].first=ra;
        road[i].second=rb;
    }

}

void solve(){
    int ans=N;
    for(int i=1;i<=N;i++){
        for(int j=0; j<M;j++){
            if(road[j].first==i){
                if(h[road[j].first-1]<=h[road[j].second-1]){
                    ans--;
                    break;
                }
            }
            if(road[j].second==i){
                if(h[road[j].second-1]<=h[road[j].first-1]){
                    ans--;
                    break;
                }
            }
        }
        
    }
    cout << ans << endl;
}

int main(){
    input();
    solve();
    return 0;
}