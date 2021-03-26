#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,k=0,t=0,i=1;
  cin >> n;
  while(n > 0){
    t=n;
    n=n-i;
    i++;
    k++;
  }
  if(k == t)
    cout << k;
  else
    cout << k-1;
}