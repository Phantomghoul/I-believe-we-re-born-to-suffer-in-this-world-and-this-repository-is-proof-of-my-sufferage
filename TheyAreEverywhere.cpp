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
#define FAST ios_base::sync_with_stdio(false); cin.tie(0);
#define sz(x) (int)x.size()
#define vi vector<int>
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

void setIO(string s = ""){
    FAST
    if(sz(s)){
            freopen((s + ".in").c_str(), "r", stdin);
            freopen((s + ".out").c_str(), "w", stdout);

    }
}

int main() {
    setIO();
    int n; cin>>n;
    string s; cin>>s;
    set<char> types(all(s));
    vector<char> a(all(s));
    int ans = INT_MAX;
    unordered_map<char,int> pok_cnt;

    int l = 0;
    for(int r = 0; r<n;r++){
        pok_cnt[a[r]]++;

        while(l +1 <=r && pok_cnt.count(a[l]) && pok_cnt[a[l]]>1){
            pok_cnt[a[l]]--;
            l++;
        }

        if(pok_cnt.size()==types.size()){
            ans = min(ans, r - l +1);
        }
    }
    cout<<ans<<endl;

}
