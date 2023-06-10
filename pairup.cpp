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
    vector<pair<ll,ll>> cows(n);

    for(int i =0; i <n;i++){
        int a,b;
        cin>>a>>b;
        cows[i] = {a,b};
    }

    int currL = 0;
    int countL = 0;
    int currR = n-1;
    int countR = 0;
    ll ans =0;

    sort(all(cows), [](pair<ll,ll>a, pair<ll,ll>b){return a.second < b.second;});

    while(currL <= currR){
        ans = max(ans, cows[currL].second + cows[currR].second);
        countL++, countR++;
        if(countL > cows[currL].first){
            currL++;
            countL = 0;
        }
        if(countR > cows[currR].first){
            currR--;
            countR = 0;
        }
    }
    cout<<ans<<endl;
}
