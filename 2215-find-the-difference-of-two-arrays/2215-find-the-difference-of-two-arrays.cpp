class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>v;
        vector<int>vec;
        set<int>st,str;
        for(int i=0;i<nums1.size();i++){
            //st.insert(nums2[i]);
            str.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            st.insert(nums2[i]);
        }
        for(auto itr:str){
            if(st.count(itr))continue;
            vec.push_back(itr);
        }
        v.push_back(vec);
        vec.clear();
        for(auto itr:st){
            if(str.count(itr))continue;
            vec.push_back(itr);
        }
        v.push_back(vec);
        return v;
    }
};