#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    string a,b;
    cout << "Enter two binary number: "<<endl;
    cin >> a >> b;
    int carry = 0;
    int n1 = a.length();
    int n2 = b.length();
    int n;
    if(n1 >= n2)
        n = n1;
    else
        n = n2;
    int a1[n],b1[n],r[n+1],cnt=n1-1;
    for(int i=n-1;i>=0;i--){
        if(cnt >= 0){
            a1[i] = a[cnt] - 48;
            cnt--;
        }
        else{
            a1[i] = 0;
        }
    }
    cnt = n2-1;
    for(int i=n-1;i>=0;i--){
        if(cnt >= 0){
            b1[i] = b[cnt] - 48;
            cnt--;
        }
        else{
            b1[i] = 0;
        }
    }
    for(int i = n-1; i >= 0; i--){
        if(a1[i] + b1[i] + carry == 0){
            r[i+1] = 0;
            carry = 0;
        }
        else if(a1[i] + b1[i] + carry == 1){
            r[i+1] = 1;
            carry = 0;
        }
        else if(a1[i] + b1[i] + carry == 2){
            r[i+1] = 0;
            carry = 1;
        }
        else{
            r[i+1] = 1;
            carry = 1;
        }
    }
    r[0] = carry;
    for(int i=0;i<=n;i++){
        cout << r[i];
    }
    return 0;
}