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
        int c1 =0;
        int c0 = 0;

        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            arr.push_back(num);
        }
      
        for(int i=0;i<arr.size();i++){
           if(arr[i]==1) c1++;
           if(arr[i]==0) c0++;
        }

        if(c1==0){
            cout<<0<<endl;
        }else{
            long long int ans = c1*(1LL<<c0);
            cout<<ans<<endl;
        }
       
    }
}