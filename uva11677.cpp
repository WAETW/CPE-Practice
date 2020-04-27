#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(int h1,int m1, int h2, int m2){
	int ans = 0;
	if(h1 > h2 || (h1 == h2 && m1 > m2)){
		ans = 1440-(h1*60 + m1) + h2*60 + m2;
	}
	else{
		ans = h2*60+m2-h1*60-m1;
	}
	cout <<ans<<endl;
}
int main(){
  int m1, m2, h1,h2;
  while(true){
    cin >> h1 >> m1 >> h2 >> m2;
    if(m1==0 &&m2 == 0 && h1 == 0 && h2==0)
      break;
		solve(h1, m1, h2, m2);
  }
}
