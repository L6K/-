#include<bits/stdc++.h>
using namespace std;

int  N, M; //Nは展望台の数　Mは道の本数
vector<int> h;


int main(){
    cin >> N >> M;
    h.resize(N);
    vector<int> ns;
    ns.resize(N,0);
    for(int i = 0 ;i<N; i++ ){
        cin >> h[i] ; //各展望台の標高を入力
    }
    for(int i=0;i<M;i++){
        int ra,rb;
        cin >> ra >> rb;
        if(h[ra-1]<h[rb-1]){
            ns[ra-1]=1;
        }else if(h[ra-1]>h[rb-1]){
            ns[rb-1]=1;
        }else{
            ns[ra-1]=1;
            ns[rb-1]=1;
        }

    }
    int cnt=0;
    for(int f=0;f<N;f++){
        if(ns[f]){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0 ;

}

