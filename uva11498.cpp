#include <bits/stdc++.h>
using namespace std;

void solve(int K){
  int dx, dy;
  cin >> dx >> dy;
  for(int i = 0; i < K;++i){
    int x, y;
    cin >> x >> y;
    if(x == dx || y == dy)
      cout<<"divisa"<<"\n";
    else if(x > dx && y > dy)
      cout<<"NE"<<"\n";
    else if(x > dx && y < dy)
      cout<<"SE"<<"\n";
    else if(x < dy && y > dy)
      cout<<"NO"<<"\n";
    else if(x < dy && y < dy)
      cout<<"SO"<<"\n";
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  while(true){
    int K = 0;
    cin >> K;
    if(K > 0){
      solve(K);
    }
    else
      break;
  }
}
