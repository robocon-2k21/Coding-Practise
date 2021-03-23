#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";
        
        while(columnNumber > 0){
            
            int temp;
            temp = columnNumber%26;
            if(temp == 0){
                ans = char(90) + ans;
                columnNumber /= 26;
                columnNumber--;
            }
            else{
                ans = char(temp+64) + ans;
                columnNumber /= 26;
            }
        }
        
        return ans;
    }
};