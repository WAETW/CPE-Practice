#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(int C){
  int N = 1000000;
  ll dp[N];
  dp[3] = 0;
  ll a = 0;
  for(int i = 4; i < N;++i){
    int j = i - 3;
    if(j%2!=0)
      j++;
    a = a + j/2;
    dp[i] = dp[i-1] + a;
  }
  cout<<dp[C]<<endl;
}

int main(){
  int C = 0;
  while(cin >> C){
    if(C<3){
      break;
    }
    else
      solve(C);
  }
  return 0;
}
