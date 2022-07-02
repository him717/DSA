class Solution {
    int md = 1e9+7;
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        
        long long maxh=0,maxw=0, prev=0;
        for(auto i:horizontalCuts){
            maxh = max(maxh, i-prev),prev=i;
        }
        maxh = max(maxh, h-prev);
        
        prev =0;
        
        for(auto i:verticalCuts){
            maxw = max(maxw, i-prev),prev=i;
        }
        maxw = max(maxw, w-prev);
        return (maxh*maxw)%md;
    }
};
