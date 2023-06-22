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
#define all(x) (x).begin(), (x).end()
#define FAST ios_base::sync_with_stdio(false); cin.tie(0);
#define sz(x) (int)x.size()
#define vi vector<int>
typedef long long int ll;
const ll MAXM = 1e5;
const ll MOD = 1e9 + 7;
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

int main(){
    setIO();
    int n; cin>>n;
    vector<tuple<int,string,int>> cows(n);
    for(int i =0; i <n;i++){
        int x,z; string s;
        cin>>x>>s>>z;
        cows[i] = {x,s,z};
    }

    sort(all(cows));
    int days = 0;
    vector<string> display = {"Bessie","Elsie","Mildred"};
    map<string, int> mp;
    mp["Bessie"] = 7;
    mp["Elsie"] = 7;
    mp["Mildred"] = 7;
    for(auto &x: cows){
        mp[get<1>(x)] += get<2>(x);
        int max_output =0;
        for(auto &[_,num]: mp){
            max_output = max(num,max_output);
        }
        vector<string> new_display;
        for(auto &[name, num]: mp){
            if(num==max_output) new_display.push_back(name);
        }
        days += display != new_display;
        display = new_display;
    }
    cout<<days<<endl;
}

