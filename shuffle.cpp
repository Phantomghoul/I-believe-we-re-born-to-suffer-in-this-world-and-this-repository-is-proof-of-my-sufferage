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
    freopen("shuffle.in", "r",stdin);
    freopen("shuffle.out","w",stdout);
    int n; cin>>n;
    vector<int> a(n),b(n);
    for(int i =0; i <n;i++) cin>>a[i];
    for(int i = 0; i <n;i++) cin>>b[i];
    //computing 3 times
    vector<int> temp(n);
    temp = b;
    for(int i = 0; i < 3;i++){
        //deshuffing n cows
        for(int j =0; j <n;j++){
            b[j] = temp[a[j]-1];
        }
        temp = b;
    }
    for(auto x :b){
        cout<<x<<endl;
    }
    return 0;
}
