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
#define int long long
#define endl "\n"
typedef long long ll;
bool possible(vector<pair<ll,ll>> &a, ll distance, int n){
    ll amt = 0;
    ll pos = a[0].first;
    ll i =0;
        while(amt <n){
        //check if we should proceed to the next patch of grass
        if(pos<=a[i].first){
            pos = a[i].first;
        }
        //check if we're within a patch a grass
        if(a[i].first <= pos && a[i].second>= pos){
            //place a cow and move to the next position by the distance given
            amt++;
            pos += distance;
        }
        else{
            //if we're not within a grass patch move to the next one
            i++;
        }
        //if we haven't placed all cows left then it's not possible given distance (mid)
        if(i>= a.size()){
            return false;
        }
    }
    return true;
}

int32_t main() {
    int n,m; cin>>n>>m;
    freopen("socdist.in", "r",stdin);
    freopen("socdist.out","w",stdout);
    vector<pair<ll,ll>> a(m);
    for(int i =0; i <m;i++){
        cin>> a[i].first >> a[i].second;
    }
    sort(a.begin(),a.end());
    int s = 0;

    ll e = a[a.size()-1].second - a[0].first;
    ll ans = 1;
    while(s<=e){
        ll mid = s + (e-s)/2;
        if(possible(a, mid, n)){
            ans = mid;
            s = mid +1;
        }
        else{
            e = mid -1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
