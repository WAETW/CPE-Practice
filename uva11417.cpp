#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int gcd(int i, int j){
	if(j == 0)
		return i;
	return gcd(j , i%j);
}
void solve(int n){
	int G = 0;
	for(int i = 1; i < n; ++i){
		for(int j = i+1;j <= n; ++j){
			G += gcd(i, j);
		}
	}
	cout <<G<<endl;
}
int main(){
  int input = 0;
  while(true){
    cin >> input;
    if(input == 0)
      break;
		solve(input);
  }
}
