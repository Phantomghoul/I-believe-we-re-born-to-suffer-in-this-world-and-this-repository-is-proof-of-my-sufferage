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

void setIO(string s){
    FAST
    freopen((s + ".in").c_str(), "r",stdin);
    freopen((s+ ".out").c_str(),"w",stdout);
}


int main(){
    FAST
    const int MOD = 2019;
    string s; cin>>s;
    int n = s.length();
    int suf = 0;
    int power_of_ten = 1;
    vector<int> cnt_suf(MOD);
    ll ans = 0;
    cnt_suf[suf]++;

    for(int i = n-1; i >=0;i--){
        int digit = s[i] -'0';
        suf = (suf+digit * power_of_ten) % MOD;
        power_of_ten = 10*power_of_ten % MOD;
        ans += cnt_suf[suf];
        cnt_suf[suf]++;
    }
    cout<<ans<<endl;

}
