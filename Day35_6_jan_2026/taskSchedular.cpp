//https://leetcode.com/problems/task-scheduler/

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int m = tasks.size();

        unordered_map<char,int> umap;

        for(int i=0;i<m;i++) umap[tasks[i]]++; //counting frequency

        priority_queue<pair<int,char>> pq; //storing <freq, char> in heap

        for(auto i:umap){
            pq.push(make_pair(i.second, i.first));
        }

        //maintaining queue for order time
        queue<tuple<int, int, char>> q;

        int time=0;

        while(!pq.empty() || !q.empty()){
            time++;//size of sequence

            if(!q.empty() && get<0>(q.front())==time){
                auto [gap, freq, ele] = q.front();
                q.pop();
                pq.push(make_pair(freq,ele));
            }

            if(!pq.empty()){
                auto [freq, ele] = pq.top();pq.pop();

                freq--; //dec freq;

                //if freq size>0 then push tuple with it next instance time to queue
                if(freq>0){
                    q.push(make_tuple(time+n+1, freq, ele));
                }
            }
        }

        return time;
    }
};