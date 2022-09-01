class Solution{
public:
    vector<int> minPartition(int N)
    {
        // code here
        int index=0;
        vector<int> ans;
        vector<int> deno{1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
        sort(deno.begin(),deno.end(),greater<int>());
        for(int i=0;i<10;i++)
        {
            if(N>=deno[i])
            {
                index=i;
                break;
            }
        }
        int curr=deno[index];
        
        while(N>0)
        {
            if(N-curr>=0){
            N=N-curr;
            ans.push_back(curr);    
            }
            
            if(N<curr)
            {
                index=index+1;
                if(index<10){
                curr=deno[index];}
            }
        }
        return ans;
    }
};
