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
//    freopen("taming.in","r",stdin);
//    freopen("taming.out","w",stdout);
    int days; cin>>days;
    vector<int> logs(days);
    for(int i =0; i<days;i++)cin>>logs[i];
    if(logs[0]>0) {
        cout<<-1<<endl;
        return 0;
    }
    logs[0] = 0;
    for(int i =0; i < days;i++){
        if(logs[i]>0){
           int ptr = i;
           int log = logs[i];
           while(log--){
               logs[ptr-1] = log;
               ptr--;
           }
        }
    }
    int min_break = 0;
    int max_break = 0;
    for(int i = 0; i <days;i++){
        if(logs[i]==0){
            min_break++;
            max_break++;
        }
        else if(logs[i]==-1){
            max_break++;
        }
    }
    cout<<min_break<<" "<<max_break;

}


