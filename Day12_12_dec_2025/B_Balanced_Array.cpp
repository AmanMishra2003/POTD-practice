/*
https://codeforces.com/contest/1343/problem/B
*/

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){

        int num;
        cin>>num;
        if((num/2)%2==1){
            cout<<"NO"<<endl;
            continue;
        }   
        cout<<"YES"<<endl;

        vector<int> arr;
        int requiredSum = 0;

        for(int i=2;i<=num;i+=2){
            requiredSum+=i;
            arr.push_back(i);
        }
        int requiredNum = num/2;

        for(int i=1;i<num*2;i+=2){
            if(requiredNum==1){
                if(requiredSum%2==1){
                    arr.push_back(requiredSum);
                    break;
                }
            }
            requiredSum-=i;
            arr.push_back(i);
            requiredNum--;
        }

    
        for(auto i:arr){
            cout<<i<<" ";
        }

        cout<<endl;
    }
    
}