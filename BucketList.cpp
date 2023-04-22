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
    freopen("blist.in","r",stdin);
    freopen("blist.out","w",stdout);
    unordered_map<int,int> a,b;
    int n; cin>>n;
    for(int i =0; i <n;i++){
        int x,y,z;
        cin>>x>>y>>z;
        a.insert({x,z});
        b.insert({y,z});
    }
    //
    int max_sum =0;
    int curr =0;
    for(int i =1;i<1001;i++){
        try{
            curr += a.at(i);
        }
        catch(...){}
        try{
            curr -= b.at(i);
        }
        catch(...){}
        max_sum = max(max_sum, curr);
    }
    cout<<max_sum;
    return 0;
}
