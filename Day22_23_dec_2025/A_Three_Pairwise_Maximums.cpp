#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n=3;

        vector<int> arr;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            arr.push_back(num);
        }

        sort(arr.begin(), arr.end());

        if(arr[1]==arr[2]){
            cout<<"Yes"<<endl;
            cout<<arr[0]<<" "<<arr[0]<<" "<<arr[2]<<endl;
        }else{
            cout<<"No"<<endl;
        }

    }
}