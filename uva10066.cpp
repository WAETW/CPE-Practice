#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(vector<int> t1, vector<int>t2){
  int dp[t1.size()+1][t2.size()+1];
  for(int i = 0; i <= t1.size();++i)
    dp[i][0] = 0;
  for(int i = 0; i <= t2.size();++i)
    dp[0][i] = 0;
  for(int i = 0; i < t1.size();++i){
    for(int j = 0; j < t2.size();++j){
      if(t1[i]==t2[j])
        dp[i+1][j+1] = dp[i][j] + 1;
      else
        dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);
    }
  }
  cout<<"Number of Tiles : "<< dp[t1.size()][t2.size()]<<endl;
}

int main(){
  int T = 0;
  while(true){
    int t1_high = 0;
    int t2_high = 0;
    vector<int> t1,t2;
    cin >> t1_high;
    cin >> t2_high;
    if(t1_high == 0 && t2_high == 0)
      return 0;
    for(int i = 0; i < t1_high;++i){
      int temp = 0;
      cin >> temp;
      t1.push_back(temp);
    }
    for(int i = 0; i < t2_high;++i){
      int temp = 0;
      cin >> temp;
      t2.push_back(temp);
    }
    T++;
    cout <<"Twin Towers #"<<T<<endl;
    solve(t1,t2);
  }
}
