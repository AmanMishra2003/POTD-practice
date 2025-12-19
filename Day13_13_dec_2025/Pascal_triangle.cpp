#include <iostream>

using namespace std;

int fact(int n){
    if(n==0 || n==1){
        return 1;
    }else{
        return n*fact(n-1);
    }
}

int combination(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}

int main(){

    int num = 14;

    for(int i=0;i<num;i++){
        
        for(int j=0;j<=num-i-1;j++){
            cout<<" ";
        }
        
        for(int l=0;l<=i;l++){
            int n = combination(i, l);
            cout<<n<<" ";
        }
        cout<<endl;
    }

    return 0;
}

/*
Leetcode:- https://leetcode.com/problems/pascals-triangle/description/

code: 
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> returnVector;

        for(int i=0;i<numRows;i++){
            vector<int> temp;
            for(int j=0;j<=i;j++){
                int n = nCr(i, j);
                temp.push_back(n);
            }
            returnVector.push_back(temp);
        }

        return returnVector;
    }

    
    long long nCr(int n, int r) {
        long long res = 1;
        r = min(r, n - r);

        for (int i = 0; i < r; i++) {
            res = res * (n - i) / (i + 1);
        }
        return res;
    }
    //formula for nCr
    /*
        C(n,r)= (n(n−1)(n−2)…)​ / (r(r−1)…)         
    */

//}
//*/