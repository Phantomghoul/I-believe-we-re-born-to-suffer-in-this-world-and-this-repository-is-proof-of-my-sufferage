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


int main() {
    freopen("pails.in","r",stdin);
    freopen("pails.out","w",stdout);
    int x,y,m;cin>>x>>y>>m;
    int max_m = 0;
    for(int i =0; i <m;i++){
        for(int j = 0; j <m;j++){
            int sum = (x*i) + (j*y);
            if(sum > m){
                break;
            }
            max_m = max(max_m, sum);
        }
    }
    cout<<max_m;
    return 0;
}
