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
    int n; cin>>n;
    vector<int> a(n);
    int cnt = 0;
    for(int i =0; i < n;i++) cin>>a[i];

    for(int i =0; i <n;i++){
        int avg  = 0;
        int dif = 0;
        for(int j = i; j < n;j++){
            avg += a[j];
            dif++;
            for(int k = i; k <= j;k++){
                double c = (double)avg/(double)dif;
                if(c==(double)a[k]) {
                    cnt++;
                    break;
                }
            }
        }
    }
    cout<<cnt <<endl;
    return 0;
}
