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
    
    int n,m; cin>>n>>m;
    vector<vector<char>> spotty(n,vector<char>(m));
    vector<vector<char>> nonspotty(n, vector<char>(m));
    for(int i =0 ; i < n;i++){
        for(int j = 0; j < m;j++){
            cin>>spotty[i][j];
        }
    }
    for(int i =0 ; i < n;i++){
        for(int j = 0; j < m;j++){
            cin>>nonspotty[i][j];
        }
    }
    //thinking how verify if char is in spotty collection
    int cnt = 0;
    for(int i = 0; i < m;i++){
        bool flag = false;
        for(int j = 0; j < n;j++){
            for(int k = 0; k <n;k++){
                if(spotty[j][i] == nonspotty[k][i]){
                    flag = true;
                    break;
                }
            }
        }
        if(!flag) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
