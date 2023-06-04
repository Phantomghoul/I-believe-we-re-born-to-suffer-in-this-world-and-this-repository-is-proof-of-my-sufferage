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
    int n,q; cin>>n>>q;
    vector<int> h(n + 1);
    vector<int> g(n + 1);
    vector<int> j(n + 1);
    for(int i =0; i <n;i++){
        h[i+1] = h[i];
        g[i+1] = g[i];
        j[i+1] = j[i];

        int cow; cin>>cow;
        if(cow==1) h[i+1]++;
        else if(cow==2)g[i+1]++;
        else j[i+1]++;
    }

    while(q--){
        int l,r;cin>>l>>r;
        cout<<h[r] - h[l-1]<<" "<<g[r] - g[l-1]<<" "<<j[r] - j[l-1]<<endl;
    }

}
