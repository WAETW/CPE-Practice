#include<bits/stdc++.h>

using namespace std;

int knapsack(vector<int> &cost, vector<int> &weight, int n, int w){
    vector<vector<int>> dp(n + 1,vector<int>(w + 1));
    for(int i = 0;i < n;++i){
        for(int j = 0;j <= w;++j){
            if(j - weight[i] < 0)
                dp[i+1][j] = dp[i][j];
            else{
                dp[i+1][j] = max(dp[i][j], dp[i][j - weight[i]] + cost[i]);
            }
        }
    }
    return dp[n][w];
}

void solve(){
    vector<int> cost;
    vector<int> weight;
    vector<int> group;
    int N, G;
    int sum = 0;
    cin >> N;
    for(int i = 0;i < N;++i){
        int P, W;
        cin >> P >> W;
        cost.push_back(P);
        weight.push_back(W);
    }
    cin >> G;
    for(int i = 0;i < G;++i){
        int NW;
        cin >> NW;
        group.push_back(NW);
    }
    for(int i:group){
        sum += knapsack(cost, weight, N, i);
    }
    cout<<sum<<"\n";
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
