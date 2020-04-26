#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
bool is_prime(int n){
  if(n < 2)
    return false;
  for(int i = 2; i < n;++i){
    if(n%i==0)
      return false;
  }
  return true;
}

int main(){
  int input = 0;
  while(true){
    cin >> input;
    int left = input;
    int right = input;
    int count = 0;
    if(input == 0)
      break;
    while(!is_prime(left)){
      left--;
      count++;
    }
    while(!is_prime(right)){
      right++;
      count++;
    }
    cout<<count<<endl;
  }
}
