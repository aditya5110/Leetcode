class Solution {
public:
    int maxScore(vector<int>& c, int k) {
        int l1 = 0;
        int l2 = k-1;
        int n = c.size();
        int h1 = n-1;
        int h2 = n-1;
        int sum = 0;
        for(int i = l1;i<=l2;i++){
            sum+=c[i];
        }
        int max_sum = sum;
        while(l2>=0){
            // max_sum = max(max_sum , sum);
            sum = sum - c[l2];
            sum = sum + c[h1];
                
            l2--;
            h1--;
            
            max_sum = max(sum,max_sum);
        }
        
        return max_sum;
    }
};