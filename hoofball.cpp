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

int main()
{
   
    FAST
    int n; cin>>n;
    if(n<=2){
        cout<<1<<endl;
        return 0;
    }
    vector<int> dis(n),to(n), reach(n);
    for(int i =0; i <n;i++)cin>>dis[i];
    sort(all(dis));
    reach[1]++; reach[n-2]++;
    to[0] = 1;to[n-1] = n-2;
    for(int i = 1; i<n-1;i++){
        if(dis[i] - dis[i-1] <= dis[i+1]-dis[i]){
            reach[i-1]++;
            to[i] = i -1;
        }
        else{
            reach[i+1]++;
            to[i] = i+1;
        }
    }
    int balls =0;
    if(reach[0] == 1 && reach[1] ==1 && to[2]!=1) balls++;
    if(reach[n-1] == 1 && reach[n-2] == 1 && to[n-3] != n-2)balls++;
    for(int i = 2; i <n-3;i++){
        if(reach[i] == 1 && reach[i+1]== 1 && to[i+2] != i+1 && to[i-1] != i){
            balls++;
        }
    }
    cout<< count(all(reach),0) + balls<<endl;

}


