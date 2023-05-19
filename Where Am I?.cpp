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
    freopen("whereami.in","r",stdin);
    freopen("whereami.out","w",stdout);
    int n; cin>>n;
    string s; cin>>s;
    int k = 1;
    while(true){
        bool found_duplicate = false;
        for(int i =0; i <=n-k;i++){
            string str = s.substr(i,k);
            if(s.find(str, i +1) != string::npos){
                found_duplicate = true;
                break;
            }
        }
        if(found_duplicate){
            k++;
        }
        else{
            break;
        }
    }
    cout<<k<<endl;
}
