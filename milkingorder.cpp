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

    int n,m,k; cin>>n>>m>>k;
    vector<int> arr(n+1);
    vector<int> fixed(n+1);
    vector<int> hei(m);
    for(int &i : hei) cin>>i;

    for(int i =0; i <k;i++){
        int c,p; cin>>c>>p;
        fixed[c] = p;
        arr[p] = c;
    }

    if(fixed[1]){
        cout<<fixed[1]<<endl;
        return 0;
    }

    int ptr = n;
    for(int i =m-1; i >=0;i--){
        int cur = hei[i];
        if(cur==1){
            ptr = 1;
            for(int j = 0; j <=i;j++){
                cur = hei[j];
                if(fixed[cur]){
                    ptr = fixed[cur] +1;
                    continue;
                }
                while(arr[ptr]) ptr++;
                arr[ptr] = cur; ptr++;
            }
            cout<< ptr-1<<endl;
            return 0;
        }
        if(fixed[cur]){
            ptr = fixed[cur] -1;
            continue;
        }
        while(arr[ptr]) ptr--;
        arr[ptr] = cur; ptr--;
    }

    for(int i =1; i <=n;i++){
        if(arr[i]==0){
            cout<<i<<endl;
            return 0;
        }
    }
}


