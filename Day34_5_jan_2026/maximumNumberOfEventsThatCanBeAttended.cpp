//https://leetcode.com/problems/maximum-number-of-events-that-can-be-attended/

class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
      int n = events.size();

      sort(events.begin(), events.end()); //sort events based on starting date

      priority_queue<int, vector<int> , greater<int>> pq; //min-heap

      int day = events[0][0];
      int count=0;
      int i=0;

      while(!pq.empty() || i<n){
            //skip unnecessary iterations
            if(pq.empty()){
                day = events[i][0];
            }

            //starting date match current date push interval end date in pq
            while(i<n && events[i][0]==day){
                pq.push(events[i][1]);
                i++;
            }

            //pop out top --> interval with early end date
            if(!pq.empty()){
                pq.pop();
                count++;
            }

            day++; //inc date 

            //popout all the element which are smaller than current date
            while(!pq.empty() && pq.top()<day){
                pq.pop();
            }
      }

      return count;
    }
};