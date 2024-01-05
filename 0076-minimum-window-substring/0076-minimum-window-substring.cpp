class Solution {
public:
    string minWindow(string s, string t) {
        map<char,int>mp;
        for(auto itr:t){
            mp[itr]++;
        }
        if(s.size()<t.size())return "";
        int i,j=0,count=mp.size(),maxi=INT_MAX;
        string str;
        int k=0,l=0,p=0;
        for( i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end()){
                mp[s[i]]--;
                if(mp[s[i]]==0){
                    count--;
                    if(count==0){
                        p=1;
                        if(maxi>(i-j+1)){
                            maxi=i-j+1;
                            k=i;
                            l=j;
                            //str=s.substr(j,i-j+1);
                           // cout<<str<<" ";
                        }
                        //maxi=max(maxi,i-j+1);
                        while(j<s.size()){
                            if(mp.find(s[j])!=mp.end()){
                                if(maxi>(i-j+1)){
                                    maxi=i-j+1;
                                    k=i;
                                    l=j;
                                    //str=s.substr(j,i-j+1);
                                }
                                mp[s[j]]++;
                                if(mp[s[j]]>0){
                                    count++;
                                    j++;
                                    break;
                                }
                            }
                            if(maxi>i-j+1){
                            //str=s.substr(j,i-j+1);
                                maxi=i-j+1;
                                k=i;
                                l=j;
                            }
                            //cout<<str<<" ";
                            j++;
                            
                        }
                       // cout<<j<<" ";
                    }
                }        
            }
        }
        if(p==1)
        str=s.substr(l,k-l+1);
        return str;
    }
};