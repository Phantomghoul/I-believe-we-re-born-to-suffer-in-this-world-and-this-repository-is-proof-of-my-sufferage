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
    freopen( "lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);
    int x,y; cin>>x>>y;
    vector<int> a;
    if(x<y) {
        int path = 1;
        while (x + path < y) {
            a.push_back(x + path);
            path *= -2;
        }
        a.push_back(x + path);
        int sum = 1;
        for(int i = 1; i <a.size();i++){
            sum += abs(a[i-1]-a[i]);
        }
        sum -=(a[a.size()-1]-y);
        cout<<sum<<endl;
    }
    else if(x==y){
        cout<<0<<endl;
    }
    else{
        int path =1;
        while (x + path> y) {
            a.push_back(path +x);
            path *= -2;
        }
        a.push_back(path+x);
        int sum =1;
        for(int i = 1; i <a.size();i++){
            sum += abs(a[i-1]-a[i]);
        }
        sum -=(y - a[a.size()-1]);
        cout<<sum<<endl;
    }
    return 0;
}
