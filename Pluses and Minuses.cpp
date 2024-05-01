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
#define int long long
#define ll long long 
#define sll unsigned long long int
#define all(x) (x).begin(), (x).end()
#define FAST ios_base::sync_with_stdio(false); cin.tie(0);
#define sz(x) (int)x.size()
#define vi vector<int>
#define in(a,b)  ( (b).find(a) != (b).end())
#define rep(i,a,b)  for(int i=a;i<b;i++)
#define trav(a, x) for (auto& a : x)
#define vll vector<long long int>
#define vsll vector<unsigned long long int>
#define pb push_back
#define fi first
#define se second
#define MOD 1000000007

const ll N = 1'000'000'000'000L;

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
    vi a(n);
    int sum = 0;
    for(int i = 0;i <n;i++){
        if(s[i] == '+') sum++;
        else sum--;
        a[i] = sum;
    }

    int res = n;

    int cur = 0;
    for(int i =0; i <n;i++){
        if(a[i]<0){
            if(abs(a[i])>cur){
                res += i+1;
                cur++;
            }
        }
    }

    cout<<res<<endl;
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

/*
    ! stuff you should look for
        * int overflow, array bounds
        * special cases (n=1)?
        * boundary cases
        * do something instead of nothing and stay organized.
        # BELIEVE in yourself.
*/
/*
Observations
    1) I noticed that given a string, that the outer loop will loop at most len(s) times,
        proof - given the worse case string "----" and cur is 4, although the string will subtract by 4, it'll never be negative.
    2) To track the value at the ith index of the string, we can simply use prefix sums e.g. " --+-" would be stored as "-1, -2, -1, -2" in a seperate array. 
        Reason we do this is to check the value where the cur breaks out in the inner loop
        We know the result increments by 1 every iteration in the inner loop, so we can assume that res would be incremented by i,
    3) To continue simulating the program, every iteration cur increments by 1, so when the value of our prefix sums absolute value is greater than cur, this tells us that the cur will break at that specific index, we already know we're to increment i, but we also increment cur by 1
    4) since we know that the outer loop will loop at most len(s) times, we can assume at the last inner loop, the inner loop will iterate at least n times because of proof one, so we can initialize res to n.
       
*/
