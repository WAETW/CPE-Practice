#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(string s1, int group_l){
  int n = s1.length();
  string s2;
  for(int i = 0; i < n; i+=group_l){
    string s3 = s1.substr(i, group_l);
    for(string::reverse_iterator it = s3.rbegin();it!=s3.rend();it++){
      s2 += *it;
    }
  }
  cout<<s2<<endl;
}

int main(){
  while(true){
    int group = 0;
    int group_l = 0;
    string s1;
    cin >> group;
    if(group == 0)
      break;
    cin >> s1;
    int n = s1.length();
    group_l = n/group;
    solve(s1, group_l);
  }
}
