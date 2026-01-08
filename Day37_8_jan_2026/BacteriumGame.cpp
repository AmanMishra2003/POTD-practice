#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <queue>
#include <stack>
#include <numeric>
#include <limits>

using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    int num = 0;
    int mask = n;


   if(n>0 && (!(n&(n-1)))){
    cout<<1<<endl;
   }else{
        while(mask){
            if(mask&1==1){
                num++;
            }
            mask>>=1;
        }
        cout<<num<<endl;
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}