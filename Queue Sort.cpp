#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <cassert>
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
#define int long long
#define ll long long 
#define sll unsigned long long int
#define all(x) (x).begin(), (x).end()
#define FAST ios_base::sync_with_stdio(false); cin.tie(0);
#define sz(x) (int)x.size()
#define vi vector<int>
#define in(a,b)  ( (b).find(a) != (b).end())
#define rep(i,a,b)  for(int i=a;i<b;i++)
#define trav(a, x) for (auto& a : x)
#define vll vector<long long int>
#define vsll vector<unsigned long long int>
#define pb push_back
#define fi first
#define se second
#define MOD 1000000007

const ll N = 1'000'000'000'000L;

// (づ°ω°)づﾐ★゜・。。・゜゜・。。・゜☆゜・。。・゜゜・。。・゜゜・。。・゜・。。・゜☆゜・。。・゜゜・。。・゜゜・。。・゜☆゜・。。・゜゜・。。・゜゜・。。・゜・。。・゜☆゜・。。・゜゜・。。・゜゜・。。・゜☆゜・。。・゜゜・。。・゜゜・。。・゜・。。・゜☆゜・。。・゜゜・。。・゜゜・。
//        .==.        .==.
//       //`^\\      //^`\\
//      // ^ ^\(\__/)/^ ^^\\
//     //^ ^^ ^/6  6\ ^^ ^ \\
//    //^ ^^ ^/( .. )\^ ^ ^ \\
//   // ^^ ^/\| v""v |/\^ ^ ^\\
//  // ^^/\/ /  `~~`  \ \/\^ ^\\
//  -----------------------------

void setIO(string s = ""){
    FAST
    if(sz(s)){
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);

    }
}

bool notpossible(vi a){

    int n = sz(a);

    int mn = min_element(all(a)) - a.begin();

    if(!is_sorted(mn+all(a))){
        return true;
    }
    else{
        return false;
    }
}

void solve() {
    int n; cin>>n;
    vi a(n); rep(i,0,n)cin>>a[i];
    if(notpossible(a)){
        cout<<-1<<endl;
        return;
    }

    int mn = min_element(all(a)) - a.begin();

    cout<<mn<<endl;

}

signed main(){
    auto begin = std::chrono::high_resolution_clock::now();
    setIO();
    int tc = 1;
    cin>>tc;
    while(tc--)solve();

    auto end = std::chrono::high_resolution_clock::now();
    cerr << setprecision(4) << fixed<<endl;
    cerr << "Execution time: " << std::chrono::duration_cast<std::chrono::duration<double>>(end - begin).count() << " seconds" << endl;
}

/*
    ! stuff you should look for
        * int overflow, array bounds
        * special cases (n=1)?
        * boundary cases
        * do something instead of nothing and stay organized.
        # BELIEVE in yourself.
*/
/*
Objective and facts
 - we're given an array of n integers

- we want to sort it in increasing order

- we can use an operation that lets us do two things
	- The array takes the first element and inserts it at the end of the array
	- The first element will be swapped with the previous elements until it becomes strictly greater than the previous ones
- It is possible that the array is impossible to sort.

- We must do this in at most O(n*logn)

- If the array is sorted, the answer will be 0
Observations
  - If we perform the operation on the lowest element, it'll always be the first.

- If the subarray, after the minimum element is not sorted, then it is impossible.

- We're going to perform at most, current position of the minimum element - first position.
guesses

- every element before the minimum element is not sorted, so we must use the operation on them.
*/
