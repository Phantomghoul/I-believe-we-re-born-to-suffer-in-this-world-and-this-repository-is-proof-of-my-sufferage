#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <cassert>
#include <fstream>
#include <math.h>
#include <stdio.h>
#include <utility>
#include <stack>
#include <algorithm>
#include <map>
#include <iomanip>
#include <cstring>
#include <queue>
#include <cctype>
#include <bits/stdc++.h>
#include <fstream>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#include <list>
#include <climits>
using namespace std;
#define endl "\n"
#define all(x) (x).begin(), (x).end()
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long int ll;
// (づ°ω°)づﾐ★゜・。。・゜゜・。。・゜☆゜・。。・゜゜・。。・゜゜・。。・゜・。。・゜☆゜・。。・゜゜・。。・゜゜・。。・゜☆゜・。。・゜゜・。。・゜゜・。。・゜・。。・゜☆゜・。。・゜゜・。。・゜゜・。。・゜☆゜・。。・゜゜・。。・゜゜・。。・゜・。。・゜☆゜・。。・゜゜・。。・゜゜・。
//        .==.        .==.
//       //`^\\      //^`\\
//      // ^ ^\(\__/)/^ ^^\\
//     //^ ^^ ^/6  6\ ^^ ^ \\
//    //^ ^^ ^/( .. )\^ ^ ^ \\
//   // ^^ ^/\| v""v |/\^ ^ ^\\
//  // ^^/\/ /  `~~`  \ \/\^ ^\\
//  -----------------------------
ll S(ll n){
    return n*(n+1)/2;
}
ll sum(ll a, ll b){
    return a<=b ? S(b) - S(a-1) : 0;
}

bool possible(ll speed, ll x, ll left){
    if(speed <= x) return true;
    ll need = sum(x+1, speed-1) +1;
    if(need <= left) return true;
    else return false;
}

int main()
{


    FAST
    ll k,n; cin>>k>>n;
    vector<int> x(n);
    for(int i =0; i <n;i++)cin>>x[i];
    for(int i = 0; i <n;i++){
        ll speed = 0;
        ll left = k;
        ll t = 0;
        while(left > 0){
            if(possible(speed +1, x[i], left - (speed +1))){
                speed++;
            }
            else if(possible(speed, x[i], left - speed)){
            }
            else{
                speed--;
            }
            assert(speed >= 1);
            left -= speed;
            t++;
        }
        cout<<t<<endl;
    }
}


