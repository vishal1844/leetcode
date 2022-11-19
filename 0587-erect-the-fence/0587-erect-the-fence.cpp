class Solution {
public:
    struct point {
        int x, y;

        bool operator < (point &a) {
            if(a.x == x) return y < a.y;
            return x < a.x;
        }

        bool operator == (point &a) {
            return (a.x == x && a.y == y);
        }
    };
    
    /* if a,b,c are 3 pts then condition for clockwise angle is 
    (b.x-a.x)/(b.y-a.y) > (c.x-b.x)/(c.y-b.y) */
    
    bool cw(point a, point b, point c){     // clock wise
        return a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y) > 0;
    }
    
    bool ccw(point a, point b, point c) {   // counter clock wise
        return a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y) < 0;
    }
    
    void convex_hull(vector<point> &p){
        int n = p.size();
        if(n < 3) return;
        
        sort(p.begin(), p.end());
        
        int i;

        point p1 = p[0], p2 = p[n - 1];
        
        /* p1 is bottom left point and p2 is top right point */
        vector<point> upper, lower;
        upper.push_back(p1);
        lower.push_back(p1);

        /* divide the all pts in 2 parts - lower half and upper half of p1 and p2 */
        for(int i = 1; i < n; i++){
            /* check whether current point is in upper or lower half of p1 and p2 */
            
            /* BUILDING UPPER HULL */
            /* check if not counter clock wise (it considers both clock wise and collinear pts) */
            if (i == n - 1 || !ccw(p1, p[i], p2)) { 
                while (upper.size() >= 2 && ccw(upper[upper.size() - 2], upper[upper.size() - 1], p[i])) {  // check angle b/w (2nd last pt, last pt, current pt) from up vector
                    upper.pop_back();
                }
                upper.push_back(p[i]);
            }
            
            /* BUILDING LOWER HULL */
            /* check if not clock wise  (it considers both counter clock wise and collinear pts) */
            if (i == n - 1 || !cw(p1, p[i], p2)) { 
                while (lower.size() >= 2 && cw(lower[lower.size() - 2], lower[lower.size() - 1], p[i])) { // check angle b/w (2nd last pt, last pt, current pt) from down vector
                    lower.pop_back();
                }
                lower.push_back(p[i]);
            }
        }
        
        p.clear();
        for(auto pt : upper) p.push_back(pt);
        for(auto pt : lower) p.push_back(pt);
        sort(p.begin(), p.end());
        p.erase( unique( p.begin(), p.end() ), p.end() );
    }
    
    vector<vector<int>> outerTrees(vector<vector<int>>& trees) {
        int n = trees.size();
        if(n < 3) return trees;
        
        vector<point> p;
        
        for(auto tree : trees) p.push_back({tree[0], tree[1]});
        
        convex_hull(p);
        
        vector<vector<int>> fences;
        for(auto pt : p) fences.push_back({pt.x, pt.y});
        return fences;
    }
};