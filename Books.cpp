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
    int n,t; cin>>n>>t;
    vi a(n);
    for(int i = 0; i <n;i++)cin>>a[i];
    int left = 0, right = 0;
    int ans = 0, temp =0;
    while(left < n && right < n){
        while(right <n){
            temp += a[right];
            right++;

            if (temp > t){
                temp -= a[--right];

                break;
            }
        }

        ans = max(ans, right - left);
        temp -= a[left++];

    }
    cout<<ans<<endl;


}
