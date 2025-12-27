#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> arr;
        
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            arr.push_back(num);
        }
        for(int i=0;i<n;i++){
            cout<<(1+n)-arr[i]<<" "; //we only looked to equal all the value 
        }


        cout<<endl;
    }

    
}

/*
question asked A1+B1<=A2+B2<=A3+B3.... we only looked for equal
for first input 
1+5 = 4+2 = 3+3
therefore (1+n)-arr[i]
*/