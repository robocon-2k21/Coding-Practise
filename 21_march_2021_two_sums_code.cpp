#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Size of array: ";
  cin>>n;
  int a[n];
  cout << "Elements of array: "<<endl;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int target;
  cout << "Target sum: ";
  cin>>target;
  for(int i=0;i<n;i++){
    for(int j=1;j<n;j++){
      if (target == a[i] + a[j]){
        cout << "["<<i<<","<<j<<"]"<<endl;
        break;
      }
    }
  }
}