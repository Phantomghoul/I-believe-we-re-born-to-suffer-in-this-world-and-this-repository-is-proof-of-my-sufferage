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
#define in(a,b)  ( (b).find(a) != (b).end())
#define rep(i,a,b)  for(int i=a;i<b;i++)
#define trav(a, x) for (auto& a : x)
#define vll vector<ll>
#define pb push_back
#define fi first
#define se second
#define MOD 1000000007
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
 
 
 
void solve() {
 
    string s; cin>>s;
    int n = sz(s);
    //if their the same
    if(s[0] == s[1]){
        cout<<s[0]<<" "<<s[1]<<" "<<s.substr(2,n)<<endl;
    }
    else{
        //ba
        if(s[0] == 'b'){
            cout<<s[0]<<" "<<s[1]<<" "<<s.substr(2,n)<<endl;
        }
        //ab
        else{
            //check if another a
            rep(i,2,n){
                if(s[i] == 'a'){
                    cout<<s[0]<<" "<<s.substr(1,i-1)<<" "<<s.substr(i,n)<<endl;
                    return;
                }
            }
            cout<<s.substr(0,n-2)<<" "<<s[n-2]<<" "<<s[n-1]<<endl;
        }
    }
 
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
 
