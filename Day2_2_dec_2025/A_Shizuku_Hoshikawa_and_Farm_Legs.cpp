/*
Kaori wants to spend the day with Shizuku! However, the zoo is closed, so they are visiting Farmer John's farm instead.

At Farmer John's farm, Shizuku counts 𝑛
 legs. It is known that only chickens and cows live on the farm; a chicken has 2
 legs, while a cow has 4
.

Count how many different configurations of Farmer John's farm are possible. Two configurations are considered different if they contain either a different number of chickens, a different number of cows, or both.

Note that Farmer John's farm may contain zero chickens or zero cows.

Input
The first line contains a single integer 𝑡
 (1≤𝑡≤100
)  — the number of test cases.

The only line of each test case contains a single integer 𝑛
 (1≤𝑛≤100
).

Output
For each test case, output a single integer, the number of different configurations of Farmer John's farm that are possible.
*/

#include <iostream>
#include <unordered_set>

using namespace std;

int main(){
    //taking number of tests in one test Case
    int t;
    cin>>t;

    //looping over tests
    while(t--){

        int count=0;//intializing a count value

        //taking number of foot count 
        int n;
        cin>>n;

        //since, chicken has 2 foot and cow have 4 foot that means 2x+4y=n
        //from 2x+4y=n we can denote even + even must be even therefore odd must give 0 count

        if(n%2==1) cout<<0<<endl; // if n is odd zero combination
        else{
            for(int i=0;i<=n/2;i++){
                for(int j=0;j<=n/2;j++){
                    if(i+(2*j)==(n/2)){
                    count++;
                    }
                }
            }
            cout<<count<<endl;
            }
    }

    return 0;
}