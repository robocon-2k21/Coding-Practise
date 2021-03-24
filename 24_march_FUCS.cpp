#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int cnt;
  int n = s.length();
  for(int i=0;i<n;i++){
    cnt=0;
    for(int j=0;j<n;j++){
      if(i!=j){
        if(s[i] == s[j]){
          cnt++;
        }
      }
    }
    if(cnt == 0){
      cout<< i;
      break;
    }
  }
  if(cnt != 0){
    cout << "-1";
  }
}