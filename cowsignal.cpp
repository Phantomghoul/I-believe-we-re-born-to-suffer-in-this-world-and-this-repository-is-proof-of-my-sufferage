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

    freopen("cowsignal.in","r",stdin);
    freopen("cowsignal.out","w",stdout);
    int M,N,K;cin>>M>>N>>K;
    for(int i =0; i <M;i++){
        string line; cin>> line;
        string outputLine;
        for(int j = 0 ; j < N;j++){
            for(int k = 0 ; k <K;k++){
                outputLine += line[j];
            }
        }
        for(int j = 0; j <K;j++){
            cout<<outputLine<<endl;
        }
    }

    return 0;
}
