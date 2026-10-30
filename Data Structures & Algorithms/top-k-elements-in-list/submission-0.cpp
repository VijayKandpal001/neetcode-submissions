#include <bits/stdc++.h>
class Solution {
public:
struct Compare {
    bool operator()(const pair<int, int>& a,
                    const pair<int, int>& b) const {
        return a.second < b.second;
    }
};

    vector<int> topKFrequent(vector<int>& nums, int k){
    vector<int>ans;
    unordered_map<int, int>hm;
    int n=nums.size();
    for(int i=0; i<n; i++)
        hm[nums[i]]++;

    priority_queue<pair<int, int>, vector<pair<int, int>>, Compare>pq;

    for(auto x:hm)
        pq.push(x);

    while(k){
        ans.push_back(pq.top().first);
        pq.pop();
        k--;    
    }
    return ans;
    }
};
