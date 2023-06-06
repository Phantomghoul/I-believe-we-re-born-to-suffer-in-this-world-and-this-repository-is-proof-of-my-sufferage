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
#define sz(x) x.size()
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

void setIO(string s){
    FAST
    freopen((s + ".in").c_str(), "r",stdin);
    freopen((s+ ".out").c_str(),"w",stdout);
}
const int maxsize = 1000;
int prefix[maxsize+1][maxsize+1];

int main() {
    setIO("paintbarn");
    int n,k; cin>>n>>k;
    for(int i =0; i <n;i++){
        int x1,x2,y1,y2; cin>>x1>>y1>>x2>>y2;
        for(int i = x1;i <x2;i++){
            prefix[i][y1]++;
            prefix[i][y2]--;
        }
    }
    int ans = 0;
    for(int i = 0; i <1000;i++){
        for(int j =0; j<1000;j++){
            if(prefix[i][j] ==k) ans++;
            prefix[i][j+1] += prefix[i][j];
        }
    }
    cout<<ans<<endl;
}
