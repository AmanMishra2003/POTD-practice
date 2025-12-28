class Solution {
  public:
    string firstNonRepeating(string &s) {
        // code here
        queue<int> q;
        unordered_map<int, int> umap;
        
        string str = "";
        
        for(auto i:s){
            //if appearing for the first time put inside queue
            if(umap[i]==0){
                q.push(i);
            }
            
            //increase the count inside unordered_map 
            umap[i]++;
            
            //if queue have element and element in front of q have frequency greater than 1 then we pop it out.
            while(!q.empty() && umap[q.front()]>1){
                q.pop();
            }
            
            //queue empty means we have popped out element from q and means there was repeating character here therefore we will put # in resultant string
            if(q.empty()){
                str.push_back('#');
            }else{
                //else we will put the character from q.front()
                str.push_back(q.front());
            }
        }
        
        return str;
    }
};