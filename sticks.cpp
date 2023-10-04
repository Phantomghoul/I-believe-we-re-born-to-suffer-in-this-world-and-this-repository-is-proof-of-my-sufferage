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
#include<tuple>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#include <list>
#include <climits>

using namespace std;
#define endl "\n"
#define f first
#define s second
#define all(x) (x).begin(), (x).end()
#define FAST ios_base::sync_with_stdio(false); cin.tie(0);
#define sz(x) (int)x.size()
#define vi vector<int>
#define vll vector<ll>
#define REP(i, a, b) for (int i = int(a); i <= int(b); i++)
#define pb push_back
#define lcm(a, b)  ((a) * (b)) / __gcd(a, b)
#define ll long long int
const ll MAXM = 1e9;
const ll MOD = 2019;
// (づ°ω°)づﾐ★゜・。。・゜゜・。。・゜☆゜・。。・゜゜・。。・゜゜・。。・゜・。。・゜☆゜・。。・゜゜・。。・゜゜・。。・゜☆゜・。。・゜゜・。。・゜゜・。。・゜・。。・゜☆゜・。。・゜゜・。。・゜゜・。。・゜☆゜・。。・゜゜・。。・゜゜・。。・゜・。。・゜☆゜・。。・゜゜・。。・゜゜・。
//        .==.        .==.
//       //`^\\      //^`\\
//      // ^ ^\(\__/)/^ ^^\\
//     //^ ^^ ^/6  6\ ^^ ^ \\
//    //^ ^^ ^/( .. )\^ ^ ^ \\
//   // ^^ ^/\| v""v |/\^ ^ ^\\
//  // ^^/\/ /  `~~`  \ \/\^ ^\\
//  -----------------------------
void read(ll *a, ll n) {
    for (ll i = 0; i < n; i++) cin >> a[i];
}

void setIO(string s = ""){
    FAST
    if(sz(s)){
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);

    }
}


void solve(){
    int n; cin>>n;
    vll a(n);
    for(int i =0; i <n;i++) cin>>a[i];
    sort(all(a));

    int ans = 1e9;
    for(int i =0; i<n;i++){
        for(int j = i+1; j<n;j++){
            for(int k = j +1; k<n;k++){
                int cur = abs(a[k]-a[j]) + abs(a[j]-a[i]);
                ans = min(cur, ans);
            }
        }
    }
    cout<<ans<<endl;

}

signed main(){
    auto begin = std::chrono::high_resolution_clock::now();
    setIO();
    int tc = 1;
    cin>>tc;
    while(tc--)solve();

    auto end = std::chrono::high_resolution_clock::now();
    cerr << setprecision(4) << fixed<<endl;
    cerr << "Execution time: " << std::chrono::duration_cast<std::chrono::duration<double>>(end - begin).count() << " seconds" << endl;
}
/* disciple is freedom
 * do things that you don't feel like doing, the real glory lies over there
 * Admitting you have control over your life means you have no one to blame
 * Suffer doing things you want to
 * draw testcases to fully understand a problem
 *  solve this problem more rather than just spamming solve / why i did do that, what was unique about it and why it was sufficient etc
 */

