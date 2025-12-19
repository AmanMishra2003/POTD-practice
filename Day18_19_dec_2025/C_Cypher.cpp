//approach 2 --> more time taking
#include <iostream>
#include <vector>

using namespace std;

int main(){

    int t;
    cin>>t;//number of test cases

    while(t--){
        int n;
        cin>>n;//number of elements

        vector<int> arr;//Encoded Sequence

        for(int i=0;i<n;i++){
            int num ;
            cin>>num;
            arr.push_back(num);
        }
        
        for(int i=0;i<n;i++){
            int sequencelen;
            cin>>sequencelen;

            for(int j=0;j<sequencelen;j++){
                char c;
                cin>>c;
                if(c=='U'){
                    arr[i]--;
                }else if(c=='D'){
                    arr[i]++;
                }
            }
            arr[i] = (arr[i] % 10 + 10) % 10;
        }

        for(int i:arr){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

/*

Approach-> 1 (case1 -> 576ms)

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

        vector<vector<char>> sequenceArr;
        
        for(int i=0;i<n;i++){
            vector<char> sequence;

            int sequencelen;
            cin>>sequencelen;

            for(int j=0;j<sequencelen;j++){
                char c;
                cin>>c;
                sequence.push_back(c);
            }

            sequenceArr.push_back(sequence);
        }


        for(int i=0;i<arr.size();i++){
            for(int j=0;j<sequenceArr[i].size();j++){
                if(sequenceArr[i][j]=='D'){
                    arr[i]++;
                    if(arr[i]>9){
                        arr[i]=0;
                    }
                }else if(sequenceArr[i][j]=='U'){
                    arr[i]--;
                    if(arr[i]<0){
                        arr[i]=9;
                    }
                }
            }
        }
        
        for(int i:arr){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
*/
