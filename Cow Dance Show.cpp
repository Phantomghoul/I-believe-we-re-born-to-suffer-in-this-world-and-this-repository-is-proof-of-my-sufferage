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

bool possible(vector<int>& cows,int k,int t){
    priority_queue<int, vector<int>, greater<>> pq;
    int n = cows.size();
    int time = 0, j = 0, size =0;
    while(size< k && j <n){
        pq.push(cows[j]);
        size++;
        j++;
    }
    while((int)pq.size()){
        time += max(0, pq.top() - time);
        pq.pop();
        if(j <n){
            pq.push(time + cows[j]);
            j++;
        }
    }
    return time <= t;
}
int main() {
    freopen("cowdance.in", "r", stdin);
    freopen("cowdance.out", "w", stdout);
    int n, t;cin>>n>>t;
    vector<int> a(n);
    for(int i = 0;i <n;i++)cin>>a[i];
    int l =1, r = n;
    int ans = n;
    while(l<=r){
        int mid = l +(r-l)/2;
        if(possible(a,mid,t)){
            ans = min(mid,ans);
            r = mid -1;
        }
        else{
            l = mid +1;
        }
    }
    cout<<ans<<endl;

}
