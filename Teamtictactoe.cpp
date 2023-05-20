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
#define all(x) (x).begin(), (x).end()
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long int ll;
// (づ°ω°)づﾐ★゜・。。・゜゜・。。・゜☆゜・。。・゜゜・。。・゜゜・。。・゜・。。・゜☆゜・。。・゜゜・。。・゜゜・。。・゜☆゜・。。・゜゜・。。・゜゜・。。・゜・。。・゜☆゜・。。・゜゜・。。・゜゜・。。・゜☆゜・。。・゜゜・。。・゜゜・。。・゜・。。・゜☆゜・。。・゜゜・。。・゜゜・。
//        .==.        .==.
//       //`^\\      //^`\\
//      // ^ ^\(\__/)/^ ^^\\
//     //^ ^^ ^/6  6\ ^^ ^ \\
//    //^ ^^ ^/( .. )\^ ^ ^ \\
//   // ^^ ^/\| v""v |/\^ ^ ^\\
//  // ^^/\/ /  `~~`  \ \/\^ ^\\
//  -----------------------------

char board[3][3];

int cows_win(char cow){
    if(board[0][0] == cow && board[1][1] == cow && board[2][2] == cow) return 1;
    if(board[0][2] == cow && board[1][1] == cow && board[2][0] == cow) return 1;

    for(int i =0; i <3;i++){
        if(board[0][i]==cow && board[1][i] == cow && board[2][i]==cow) return 1;
        if(board[i][0]==cow && board[i][1] == cow && board[i][2]==cow) return 1;
    }
    return 0;
}
bool check(char cow1, char cow2, char one, char two, char three){
    if(one != cow1 && one != cow2) return false;
    if(two != cow1 && two != cow2) return false;
    if(three != cow1  && three != cow2) return false;

    if(one != cow1 && two != cow1 && three != cow1) return false;
    if(one != cow2 && two != cow2 && three != cow2) return false;

    return true;
}
int team_win(char cow1, char cow2){
    if(check(cow1,cow2, board[0][0], board[1][1], board[2][2])) return 1;
    if(check(cow1,cow2, board[0][2], board[1][1], board[2][0])) return 1;

    for(int i = 0; i <3;i++){
        if(check(cow1,cow2, board[0][i], board[1][i], board[2][i])) return 1;
        if(check(cow1,cow2, board[i][0], board[i][1], board[i][2])) return 1;
    }
    return 0;
}
int main() {
    freopen("tttt.in","r",stdin);
    freopen("tttt.out","w",stdout);
    FAST
    for(int i =0; i <3;i++){
        for(int j = 0; j < 3;j++){
            cin>>board[i][j];
        }
    }
    int single =0, duo =0;
    for(char ch = 'A'; ch <='Z';ch++){
        single += cows_win(ch);
    }
    for(char ch = 'A'; ch<='Z';ch++){
        for(char ch2 = ch +1;ch2<='Z';ch2++){
            duo += team_win(ch, ch2);
        }
    }
    cout<<single<<endl;
    cout<<duo<<endl;
}
