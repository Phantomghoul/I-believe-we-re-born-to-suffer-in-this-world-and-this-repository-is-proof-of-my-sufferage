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

int main(){
    FAST
    int n; cin>>n;
    vector<pair<string,string>> demands;
    for(int i =0; i <n;i++){
        string a,b,t;
        cin>>a;
        cin>>t>>t>>t>>t;
        cin>>b;
        demands.push_back({a,b});
    }
    vector<string> cows = {"Beatrice", "Sue","Belinda","Bessie","Betsy","Blue","Bella","Buttercup"};
    sort(all(cows));
    while(next_permutation(all(cows))){
        bool flag = true;
        for(auto x :demands){
            string c1 = x.first;
            string c2 = x.second;
            auto a = find(all(cows), c1);
            auto b = find(all(cows),c2);
            if(abs(a-b) != 1) flag = false;
        }
        if(flag) break;
    }
    for(auto x : cows) cout<<x<<endl;
}


