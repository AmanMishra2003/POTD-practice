/*
https://codeforces.com/problemset/problem/1843/B
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> arr;
        for(int i=0;i<n;i++){
            int num ;
            cin>>num;
            arr.push_back(num);
        }

        int count=0;
        
        //removing zero from the array (cause usse fark nahi padega 0*-1 = 0)
        for(int i=0;i<arr.size();){
            if(arr[i]==0){
                arr.erase(arr.begin()+i);
            }else{
                i++;
            }
        }

        //checking subarrayes with only negative value or zero that will be our answer;
        n = arr.size();
        int j=0;
        int i=0;
        long long int sum=0;

        while(i<n){
            sum+=abs(arr[i]);
            if(arr[i]<0){
                i++;
            }else{
                if(arr[i]>0 && arr[j]<0){
                    count++;
                }
                i++;
                j=i;
            }
        }

        if(j!=i) count+=1;

        cout<<sum<<" "<<count<<endl;
    }
}