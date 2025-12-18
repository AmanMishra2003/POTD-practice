/*
https://leetcode.com/problems/compare-version-numbers/description/
*/
class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<int> version1arr;
        vector<int> version2arr;

        //version1 ke liye
        int v1_j = 0;
        for(int i=0;i<version1.size();i++){
            if(version1[i]=='.' ){
                string s = version1.substr(v1_j,i-v1_j);
                version1arr.push_back(stoi(s));
                v1_j=i+1;
            }

        }
        string s1 = version1.substr(v1_j,version1.size()-v1_j);
        version1arr.push_back(stoi(s1));

        //version2 le liye
        int v2_j = 0;
        for(int i=0;i<version2.size();i++){
            if(version2[i]=='.' ){
                string s = version2.substr(v2_j,i-v2_j);
                version2arr.push_back(stoi(s));
                v2_j=i+1;
            }
        }
        string s2 = version2.substr(v2_j,version2.size()-v2_j);
        version2arr.push_back(stoi(s2));


        //comparision
        int size = version1arr.size()>version2arr.size()?version1arr.size():version2arr.size();
        for(int i=0;i<size;i++){
            if(i>=version1arr.size()) version1arr.push_back(0);//agar chota hai size to end me zero add karna
            if(i>=version2arr.size()) version2arr.push_back(0);

            if(version1arr[i]>version2arr[i]){
                return 1;
            }else if(version1arr[i]<version2arr[i]){
                return -1;
            }
        }

        return 0;
        
    }
};