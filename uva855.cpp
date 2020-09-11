#include<bits/stdc++.h>

using namespace std;

void solve(){
    vector<int> x;
    vector<int> y;
    int S, A, F;
    cin >> S >> A >> F;
    for(int i = 0;i < F;++i){
        int a, b;
        cin >> a >>b;
        x.push_back(a);
        y.push_back(b);
    }
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    int street = F%2 != 0 ? x[F/2]:x[F/2 - 1];
    int avenue = F%2 != 0 ? y[F/2]:y[F/2 - 1];
    cout<<"(Street: "<<street<<", Avenue: "<<avenue<<")\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T = 0;
    cin >> T;
    for(int i = 0;i < T;++i){
        solve();
    }
}
