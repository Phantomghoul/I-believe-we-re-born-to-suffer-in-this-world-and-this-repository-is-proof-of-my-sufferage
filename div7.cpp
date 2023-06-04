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
    ll n; cin>>n;
    vector<ll> cows(n);
    vector<ll> prefix(n+1);
    for(int i =0; i <n;i++){
        cin>>cows[i];
        prefix[i+1] = (prefix[i]+cows[i]) %7;
    }

    vector<int> lastFound(7,-1);
    int max_group =0;

    for(int i = 0; i <prefix.size();i++){
        if(lastFound[prefix[i]] == -1)lastFound[prefix[i]] =i;
        else{
            max_group = max(max_group, i - lastFound[prefix[i]]);
        }
    }
    cout<<max_group;
}
