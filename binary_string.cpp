#include <bits/stdc++.h>
using namespace std;

string to_binary(int a){
    string ans = "";

    while(a>0){
        int temp = a%2;
        char temp2;
        if(temp == 1)
            temp2 = '1';
        else temp2 = '0';
        ans = temp2 + ans;
        a = a >> 1;
    }

    return ans;
}

int to_int(string a){
    int n = a.length() - 1, ans = 0;
    int i = 0;
    while(n>=0){
        ans = ans + int(pow(2, i)*(int(a[n]) - 48));
        i++;
        n--;
    }
    return ans;
}

string add_binary(string a, string b){
    int num1 = to_int(a);
    int num2 = to_int(b);

    int ans = num1 + num2;

    return to_binary(ans);
}