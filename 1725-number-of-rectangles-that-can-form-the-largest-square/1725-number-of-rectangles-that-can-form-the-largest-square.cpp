class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        vector<int>minL;
        for(int i = 0; i < rectangles.size(); i++){
            minL.push_back(min(rectangles[i][0],rectangles[i][1]));
        }
        int maxL = 0, cnt = 0;
        for(int i = 0; i < minL.size(); i++){
            maxL = max(maxL, minL[i]);
        }
        for(int i = 0; i < minL.size(); i++){
            if(minL[i]==maxL){
                cnt++;
            }
        }
        
        
        return cnt;
    }
};