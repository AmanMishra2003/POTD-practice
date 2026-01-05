//https://www.geeksforgeeks.org/problems/game-with-string4100/1?page=1&category=Heap&sortBy=submissions
class Solution {
  public:
    int minValue(string &s, int k) {
        // code here
        unordered_map<char, int> umap;//storing frequencies of characters
        
        for(int i=0;i<s.size();i++){
            umap[s[i]]++;
        }
        
        priority_queue<int> pq;//priority queue having all frequency
        
        for(auto i: umap){
            pq.push(i.second);
        }
        
        long long sum = 0;
        
        //Idea is removing 1 from highest frequency until k is zero
        while(k){
            int num = pq.top();pq.pop();
            num--;
            pq.push(num);
            k--;
        }
        
        while(!pq.empty()){
            sum+=(pq.top()*pq.top());pq.pop();
        }
        
        return sum;
    }
};