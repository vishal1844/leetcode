class MedianFinder {
    priority_queue<int>maxheap;
    priority_queue<int,vector<int>,greater<int>>minheap;
    
public:
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(maxheap.empty()||maxheap.top()>=num){
            maxheap.push(num);
        }
        else{
            minheap.push(num);
        }
        int m=maxheap.size();
        int n=minheap.size();
        //cout<<m<<" "<<n;
        if(m>(n+1)){
            auto itr=maxheap.top();
            maxheap.pop();
            minheap.push(itr);
        }
        else if(m<n){
            auto itr=minheap.top();
            minheap.pop();
            //cout<<itr<<" ";
            maxheap.push(itr);
        }
    }
    
    double findMedian() {
        if(maxheap.size()==minheap.size()){
            return (maxheap.top()+minheap.top())/2.0;
        }
        else{
            return (double)maxheap.top();
        }
        return 0.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */