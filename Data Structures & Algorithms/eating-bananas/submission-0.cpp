class Solution {
public:
    bool check(vector<int>& piles, int h,int mid){
        int c=mid;
        int count=0;

        for(int i=0;i<piles.size();i++){
            if(count>h){
                return false;
            }

            if(piles[i]<c){
                count+=1;
            }else{
                if((piles[i]%c)==0){
                    count+=(piles[i]/c);
                }else{
                    count+=(piles[i]/c)+1;
                }
            }
        }

        if(count>h){
            return false;
        }else{
            return true;
        }
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int max=piles[0];
        int n=piles.size();

        for(int i=0;i<n;i++){
            if(max<piles[i]){
                max=piles[i];
            }
        }

        int lo=1;
        int hi=max;
        int ans;

        while(lo<=hi){
            int mid=lo+(hi-lo)/2;

            if(check(piles,h,mid)==true){
                ans=mid;
                hi=mid-1;
            }else{
                lo=mid+1;
            }
        }

        return ans;
    }
};