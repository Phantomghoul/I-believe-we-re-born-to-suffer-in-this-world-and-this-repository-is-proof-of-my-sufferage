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
    int n; cin>>n;
    map<string, int> mp;
    for(int i =0; i <n;i++){
        string s; int x;
        cin>>s>>x;
        mp[s] += x;
    }

    vector<pair<int,string>> cows;
    for(auto x : mp) {
        cows.push_back({x.second, x.first});
    }
    sort(all(cows));
    int i = 0;
    const int numofCows = 7;
    if(cows.size()==numofCows){
        while(i < cows.size() && cows[i].first == cows[0].first)i++;
    }
    if(i < cows.size() && (i + 1 == cows.size() || cows[i].first != cows[i +1].first)){
        cout<<cows[i].second<<endl;
    }
    else{
        cout<<"Tie"<<endl;
    }
}
