#include<bits/stdc++.h>

using namespace std;

void solve(){
    int m, n;
    int total_error = 0;
    string con_string = "";
    vector<string> s;
    vector<char> v = {'A','T','C','G'};
    cin >> m >> n;
    for(int i = 0;i < m;++i){
        string DNA = "";
        cin >> DNA;
        s.push_back(DNA);
    }
    for(int i = 0;i < n;++i){
        priority_queue<pair<int, char>, vector<pair<int, char>>, greater<pair<int, char>>> q;
        for(char ch:v){
            int tmp_sum = 0;
            for(int j = 0;j < m;++j){
                if(ch != s[j][i])
                    ++tmp_sum;
            }
            q.push({tmp_sum, ch});
        }
        total_error += q.top().first;
        con_string.push_back(q.top().second);
    }
    cout<<con_string<<"\n";
    cout<<total_error<<"\n";
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
