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

    freopen("speeding.in","r",stdin);
    freopen("speeding.out","w",stdout);
    int N = 0, M = 0,pos = 0;
    int speed[100], driver[100];
    cin>>N>>M;
    vector<pair<int,int>> a,b;
    for(int i =0; i<N;i++){
        int x,y; cin>>x>>y;
        a.push_back({x,y});
    }
    for(int i =0; i <M;i++){
        int x,y; cin>>x>>y;
        b.push_back({x,y});
    }
    for(int i =0; i <N;i++){
        for(int j = pos; j <pos +a[i].first;j++){
            speed[j] = a[i].second;
        }
        pos+=a[i].first;
    }
    pos = 0;
    for(int i =0; i <M;i++){
        for(int j = pos; j <pos +b[i].first;j++){
            driver[j] = b[i].second;
        }
        pos+=b[i].first;
    }
    int max_over =0;
    for(int i = 0; i <100;i++){
        max_over = max(max_over, driver[i] - speed[i]);
    }
    cout<<max_over;
    return 0;
}
