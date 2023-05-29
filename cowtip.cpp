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
    vector<vector<char>> a(n, vector<char> (n));
    for(int i = 0; i <n;i++){
        for(int j = 0 ; j < n;j++) cin>>a[i][j];
    }

    int flips = 0;

    for(int i =n-1; i >=0;i--){
        for(int j = n-1; j>=0;j--){
            if(a[i][j]=='1'){
                flips++;
                for(int b = 0; b <=i;b++){
                    for(int c = 0; c <=j;c++){
                        if(a[b][c] == '0'){
                            a[b][c] = '1';
                        }
                        else{
                            a[b][c] = '0';
                        }
                    }
                }
            }
        }
    }
    cout<<flips<<endl;
}


