#include <iostream>
#include <vector>
#include <string>
#include <string.h>
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



int main() {
    FAST
    int k,n;
    cin>>k>>n;
    vector<int> a(k+1),b(n);
    for(int i =1 ; i <=k;i++) {
        cin>>a[i];
        a[i] += a[i-1];
    }
    for(int i =0; i <n;i++) cin>>b[i];

    set<int> x;
    for(int i =1; i <=k;i++){
        x.insert(b.front() - a[i]);
    }
    int ans = 0;
    for(int s : x){
        set<int> points;
        for(int i = 1; i <=k;i++)points.insert(s + a[i]);
        bool flag = true;
        for(int it: b){
            flag &= points.count(it);
        }
        if(flag)ans++;
    }
    cout<<ans<<endl;
}
