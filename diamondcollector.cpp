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
    freopen("diamond.in","r",stdin);
    freopen("diamond.out","w",stdout);
    int n,k; cin>>n>>k;
    vector<int> a(n);
    int sum = 0;
    for(int i =0; i <n;i++){
        cin>>a[i];
    }
    for(int i =0; i <n;i++){
        int cnt = 0;
        for(int j = 0; j < n;j++){
            if(a[i]<=a[j] && a[j] <= a[i] +k) cnt++;
        }
        sum = max(sum,cnt);
    }
    cout<<sum<<endl;
    return 0;
}
