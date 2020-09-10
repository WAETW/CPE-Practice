#include <bits/stdc++.h>
using namespace std;
void helper(vector<vector<int>> &mp, int i, int j, int x, int y){
  vector<vector<int>> mp2 ={{1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
  for(auto a:mp2){
    if(i+a[0] >= 0 && i+a[0] < x && j+a[1] >= 0 && j+a[1] < y){
      if(mp[i+a[0]][j+a[1]]!=-1)
        mp[i+a[0]][j+a[1]]++;
    }
  }
}
void solve(int x, int y){
  vector<vector<int>> mp(x, vector<int>(y));
  vector<vector<int>> mp2(x, vector<int>(y));
  for(int i = 0;i < x;++i){
    for(int j = 0;j < y;++j){
      char ch;
      cin >> ch;
      if(ch == '*')
        mp[i][j] = -1;
    }
  }
  for(int i = 0;i < x;++i){
    for(int j = 0;j < y;++j){
      if(mp[i][j] == -1)
        helper(mp, i, j, x, y);
    }
  }
  for(int i = 0;i < x;++i){
    for(int j = 0;j < y;++j){
      if(mp[i][j] == -1)
        cout<<"*";
      else
        cout<<mp[i][j];
    }
    cout<<"\n";
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int f = 1;
  while(true){
    int x, y;
    cin >> x >> y;
    if(x == 0 || y == 0)
      break;
    cout<<"Field #"<<f<<":\n";
    solve(x, y);
    ++f;
  }
}
