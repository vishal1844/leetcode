// class Solution {
// public:
//     string simplifyPath(string path) {
//         int n=path.length();
//         stack<string>s;
                
//         if(path[n-1]!='/') // so that initially path always ends with '/'
//             path+="/", ++n;
            
//         int i=1; // since path always starts from '/'
//         string ans="";
//         string temp="";
//         while(i<n){
            
//             if(path[i]=='/'){ // check only if we encounter '/'
                
//                 if(temp=="" || temp=="."){
//                     // ignore
//                 }
//                 else if(temp==".."){
//                     if(!s.empty()) s.pop(); // pop the top element from stack if exists
//                 }
//                 else{
//                     s.push(temp); //push the directory or file name to stack
//                 }
                
//                 temp=""; // reset temp
//             }
//             else{
//                 temp.push_back(path[i]); // else append to temp
//             }
            
//             ++i; // increment index
//         }
        
//         while(!s.empty()){ // add all the stack elements
//             ans="/"+s.top()+ans;
//             s.pop();
//         }
        
//         if(ans.length()==0) // if no directory or file is present
//             ans="/"; // minimum root directory must be present in ans
        
//         return ans;
//     }
// };
class Solution {
public:
    string simplifyPath(string path) {
        string s;
        int i,j,k,l,m,t=0;
        stack<string>st;
        int n=path.size();
        if(path[n-1]!='/'){
            path+='/';
            n++;
        }
        i=1;
        while(i<path.size()){
            if(path[i]=='/'){
                if(s==""||s=="."){
                    //ignore
                }
                else if(s==".."){
                    if(!st.empty()){
                        st.pop();
                    }
                }
                else{
                    st.push(s);
                }
                s="";
            }
            else{
                s+=path[i];
            }
            i++;
        }
        s="";
       // string s;
        while(!st.empty()){
            s="/"+st.top()+s;
            st.pop();
        }
        if(s.size()==0){
            return "/";
        }
        return s;
    }
};