class NumArray {
    vector<int>seg;
    vector<int>v;
    void build(int ind,int low,int high){
        if(low==high){
            seg[ind]=v[low];
            return;
        }
        int mid=(low+high)/2;
        build(2*ind+1,low,mid);
        build(2*ind+2,mid+1,high);
        seg[ind]=seg[2*ind+1]+seg[2*ind+2];
    }
    int query( int ind,int low,int high,int l,int r){
        if(high<l||r<low)return 0;
        if(l<=low&&high<=r)return seg[ind];
        int mid=(low+high)/2;
        int left=query((2*ind+1),low,mid,l,r);
        int right=query((2*ind+2),mid+1,high,l,r);
        return left+right;
    }
    void upd(int ind,int low,int high,int i,int val){
        if(low==high){
            seg[ind]=val;
            return;
        }
        int mid=(low+high)/2;
        if(i<=mid){
            upd(2*ind+1,low,mid,i,val);
            //seg[ind]=seg[2*ind+1];
        }
        else{
            upd(2*ind+2,mid+1,high,i,val);
            //seg[ind]=seg[2*ind+2];
        }
        seg[ind]=seg[2*ind+1]+seg[2*ind+2];
    }
public:
    NumArray(vector<int>& nums) {
        int n=nums.size();
        seg.resize(4*n,0);
        v=nums;
        build(0,0,n-1);
    }
    
    void update(int index, int val) {
        upd(0,0,v.size()-1,index,val);
    }
    
    int sumRange(int left, int right) {
        return query(0,0,v.size()-1,left,right);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */