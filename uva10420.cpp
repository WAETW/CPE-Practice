#include<bits/stdc++.h>

using namespace std;

void solve(string s1, unordered_map<string ,int> &mp){
    if(!mp.count(s1))
        mp[s1] = 1;
    else
        ++mp[s1];
}

int main(){
    ios::sync_with_stdio(false);
    int N = 0;
    unordered_map<string ,int> mp;
    cin >> N;
    while(N > 0){
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        solve(s1, mp);
        --N;
    }
    for(auto a:mp){
        cout<<a.first<<" "<<a.second<<"\n";
    }
}
