#include <iostream>
#include <string>
using namespace std;

int main(){
    string temp ;
    cin>>temp;

    for(int i=0;i<temp.size();i++){
        if(temp[i]>='5'){
            int n = temp[i]-'0';
            temp[i] = (9-n)+'0';
        }
    }
    if(temp[0]=='0') temp[0]='9';

    cout<<temp<<endl;

}