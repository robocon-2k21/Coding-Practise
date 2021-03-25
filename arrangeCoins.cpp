#include <bits/stdc++.h>
using namespace std;


int arrangeCoins(int n){
    int i = 1;
    while(n>0){
        if(n-i < 0){
            i--;
            break;
        }
        else if(i == n) 
            break;
        else{
             n -= i;
             i++;
        }
        
    }
    return i;
}


//using binary search
int bin_arrange_coins(int n){
    int l = 0, r = n;

    while(l<r){
        int mid = l + (r-l)/2;
        
        int value = (mid * (mid + 1))/2;

        if(value == n)
            return value;
        
        else if(value < n){
            l = mid+1;
        }
        else
            r = mid-1;
    }

    return r;
}



int main(){
}