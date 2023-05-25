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
    vector<int> a(3);
    for(int i =0;i<3;i++){cin>>a[i];}
    int minDis =INT_MAX;
    int maxDis = 0;
    for(int i =1; i <3;i++){
        minDis = min(minDis, a[i]-a[i-1]);
        maxDis = max(maxDis, abs(a[i]-a[i-1]));
    }
    if(abs(a[0]-a[1])==1 && abs(a[1]- a[2])==1){
        cout<<0<<endl;
        cout<<0<<endl;
        return 0;
    }
    if(minDis == 2){
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
    }
    cout<<maxDis-1<<endl;
}
