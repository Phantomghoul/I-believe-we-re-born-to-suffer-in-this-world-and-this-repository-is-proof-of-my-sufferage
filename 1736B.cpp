//
// Created by MNden on 5/27/2025.
//
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
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define FAST ios_base::sync_with_stdio(false); cin.tie(0);
#define sz(x) (int)x.size()
#define vi vector<int>
#define vs vector<string>
#define int long long
#define ll long long
#define pi pair<int,int>
#define pii pair<pair<int,int>,int>
#define in(a,b)  ( (b).find(a) != (b).end())
#define rep(i,a,b)  for(int i=a;i<b;i++)
#define trav(a, x) for (auto& a : x)
#define vll vector<ll>
#define pb push_back
#define fi first
#define se second
#define vt vector
#define ar array
#define NO cout<<"NO"<<endl;
#define YES cout<<"YES"<<endl;

#define make_unique(x) sort(all((x))); (x).resize(unique(all((x))) - (x).begin())

template<class A> void read(vt<A>& v);
template<class A, size_t S> void read(ar<A, S>& a);
template<class T> void read(T& x) {
    cin >> x;
}
void read(double& d) {
    string t;
    read(t);
    d=stod(t);
}
void read(long double& d) {
    string t;
    read(t);
    d=stold(t);
}
template<class H, class... T> void read(H& h, T&... t) {
    read(h);
    read(t...);
}
template<class A> void read(vt<A>& x) {
    trav(a, x)
        read(a);
}

template<class A, size_t S> void read(array<A, S>& x) {
    trav(a, x)
        read(a);
}
clock_t startTime;
double getCurrentTime() {
    return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}
// (づ°ω°)づﾐ★゜・。。・゜゜・。。・゜☆゜・。。・゜゜・。。・゜゜・。。・゜・。。・゜☆゜・。。・゜゜・。。・゜゜・。。・゜☆゜・。。・゜゜・。。・゜゜・。。・゜・。。・゜☆゜・。。・゜゜・。。・゜゜・。。・゜☆゜・。。・゜゜・。。・゜゜・。。・゜・。。・゜☆゜・。。・゜゜・。。・゜゜・。
//        .==.        .==.
//       //`^\\      //^`\\
//      // ^ ^\(\__/)/^ ^^\\
//     //^ ^^ ^/6  6\ ^^ ^ \\
//    //^ ^^ ^/( .. )\^ ^ ^ \\
//   // ^^ ^/\| v""v |/\^ ^ ^\\
//  // ^^/\/ /  `~~`  \ \/\^ ^\\
//  -----------------------------
/*
vector<int> countSort(vector<int>& inputArray){
    int N = inputArray.size();
    // Finding the maximum element of array inputArray[].
    int M = 0;
    for (int i = 0; i < N; i++)
        M = max(M, inputArray[i]);

    // Initializing countArray[] with 0
    vector<int> countArray(M + 1, 0);

    // Mapping each element of inputArray[] as an index
    // of countArray[] array

    for (int i = 0; i < N; i++)
        countArray[inputArray[i]]++;

    // Calculating prefix sum at every index
    // of array countArray[]
    for (int i = 1; i <= M; i++)
        countArray[i] += countArray[i - 1];

    // Creating outputArray[] from countArray[] array
    vector<int> outputArray(N);

    for (int i = N - 1; i >= 0; i--){
        outputArray[countArray[inputArray[i]] - 1]= inputArray[i];

        countArray[inputArray[i]]--;
    }

    return outputArray;
}
*/
void setIO(string s = ""){
    FAST
    if(sz(s)){
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);

    }
}

/*
ll pw(ll a, ll b) {
	ll ans = 1; while (b) {
		while (!(b & 1)) b >>= 1, a = (a * a) % MOD;
		ans = (ans * a) % MOD, --b;
	} return ans;
}
*/

/*
void bucketsort(int a[], int n){ // function to implement bucket sort
    int max = a[0]; // get the maximum element in the array
    for (int i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];
    int b[max], i;
    for (int i = 0; i <= max; i++) {
        b[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        b[a[i]]++;
    }
    for (int i = 0, j = 0; i <= max; i++) {
        while (b[i] > 0) {
            a[j++] = i;
            b[i]--;
        }
    }
}
*/
int lcm(int a, int b) {
    return (a * b) / __gcd(a, b);
}
void solve() {

    int n; cin>>n;
    vi a(n); read(a);
    vi b(n+1);
    b[0] = a[0]; b[n] = a[n-1];
    for(int i =1; i <n;i++){
        b[i] = (a[i]*a[i-1])/__gcd(a[i],a[i-1]);
    }
    for(int i =0; i<n;i++){
        if(__gcd(b[i],b[i+1]) != a[i]){
            NO
            return;
        }
    }
    YES;
}



signed main(){

    setIO();

    int tc = 1;
    cin>>tc;
    for(int i = 1; i<=tc; i++){
        startTime = clock();
        cerr<<"--- Case "<<i<<" start ----"<<endl;
        solve();
        cerr<<"--- Case "<<i<<" end ----"<<endl;
        cerr << setprecision(4) << fixed;
        cerr<<"time = "<<getCurrentTime()<<endl;
    }


    return 0;
}

/*
disciple is freedom
 * do things that you don't feel like doing, the real glory lies over there
*/
/*
       - Starting is the hard part
            Start reading
            Start dissecting, etc, starting these is the hard part, once you've started, it becomes easier
       - Finish the sub-problem before jumping to the next
       - do things that you don't feel like doing, the real glory lies over there
*/
