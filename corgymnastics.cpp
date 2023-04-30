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
typedef long long ll;

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
    freopen("gymnastics.in", "r",stdin);
    freopen("gymnastics.out","w", stdout);
    int n,k; cin>>k>>n;
    int a[10][20] = {0};
    int b[20][20] = {0};
    for(int i =0;i < k;i++){
        for(int j = 0; j < n;j++){
            cin>>a[i][j]; a[i][j]--;
        }
    }
    for(int i =0; i < k;i++){
        for(int j = 0; j < n;j++){
            for(int l = j + 1; l < n; l++){
                b[a[i][j]][a[i][l]]++;
            }
        }
    }
    int cnt = 0;
    for(int i =0; i <n;i++){
        for(int j = 0; j < n;j++){
            if(b[i][j]==k) cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
