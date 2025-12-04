/*
link->. https://leetcode.com/problems/two-out-of-three/
*/
class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> returnVector;

        unordered_map<int,int> umap1;
        unordered_map<int,int> umap2;
        unordered_map<int,int> umap3;

        unordered_set<int> uset;

        for(int i=0;i<nums1.size();i++) umap1[nums1[i]]++;
        for(int i=0;i<nums2.size();i++) umap2[nums2[i]]++;
        for(int i=0;i<nums3.size();i++) umap3[nums3[i]]++;

        for(auto i:umap1){
            if(umap2.find(i.first)!=umap2.end()){
                uset.insert(i.first);
            }
        }
        for(auto i:umap2){
            if(umap3.find(i.first)!=umap2.end()){
                uset.insert(i.first);
            }
        }
        for(auto i:umap3){
            if(umap1.find(i.first)!=umap2.end()){
                uset.insert(i.first);
            }
        }

        for(auto i:uset){
            returnVector.push_back(i);
        }

        return returnVector;
    }
};