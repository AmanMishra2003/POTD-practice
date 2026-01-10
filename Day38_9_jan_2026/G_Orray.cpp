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

    vector<int> a(n);
    for (int &x : a) cin >> x;

    // your logic here
    vector<int> ans;
    
    int curr = 0;

    for(int i = 0; i < min(n, 31); i++) {
        int temp = curr, bestIdx = -1;

        for(int j = 0; j < n; j++) {
            if(a[j] == -1) continue;

            if((curr | a[j]) > temp) {
                bestIdx = j;
                temp = curr | a[j];
            }
        }

        if(bestIdx == -1) break; 

        curr |= a[bestIdx];
        ans.pb(a[bestIdx]);
        a[bestIdx] = -1;
    }
    
    for(int i=0;i<n;i++){
        if(a[i]!=-1)ans.pb(a[i]);
    }
    for(int i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}