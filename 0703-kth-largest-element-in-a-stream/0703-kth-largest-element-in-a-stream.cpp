class KthLargest {
public:
priority_queue<int,vector<int>,greater<int>>pq;
int t;

    KthLargest(int k, vector<int>& nums) {
        //sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size();i++){
        //     v.push_back(nums[i]);
        // }
        int i=0;
        for(i=0;i<nums.size();i++){
            pq.push(nums[i]);
            if(pq.size()>k) pq.pop();
        }
        t=k;
        //sort(v.begin(),v.end());
    }
    
    int add(int val) {
       pq.push(val);
       if(pq.size()>t)
       pq.pop();
       return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */