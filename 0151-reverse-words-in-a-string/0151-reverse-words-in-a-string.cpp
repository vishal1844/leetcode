class Solution {
public:
    string reverseWords(string s) {
        string st;
        int i=0,l=0,j=0,k,m,t;
        reverse(s.begin(),s.end());
        while(i<s.size()){
            while(i<s.size()&&s[i]==' ')i++;
            while(i<s.size()&&s[i]!=' '){
                st+=s[i++];
                j++;
            }
            if(l<j){
                reverse(st.begin()+l,st.begin()+j);
                if(j==s.size()) break;
                st+=' ';
                j++;
                l=j;
            }
        }
        if(j>0&&st[j-1]==' '){
            st.pop_back();
        }
        //cout<<st.size();
        return st;
    }
};
// class Solution {
// public:
//     string reverseWords(string s) {
//         reverse(s.begin(), s.end());
//         int l = 0, r = 0, i = 0, n = s.size();
//         while (i < n) {
//             while (i < n && s[i] != ' ')
//                 s[r++] = s[i++];

//             if (l < r) { // if we can find a non-empty word then
//                 reverse(s.begin() + l, s.begin() + r); // reverse current word
//                 if (r == n) break;
//                 s[r++] = ' '; // set empty space
//                 l = r;
//             }
//             ++i; // now i == n or s[i] == ' ', so we skip that character!
//         }
//         if (r > 0 && s[r-1] == ' ') --r; // skip last empty character if have
//         s.resize(r);
//         return s;
//     }
// };