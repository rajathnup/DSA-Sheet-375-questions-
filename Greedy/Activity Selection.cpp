class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        // Your code here
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;
        for(int i=0;i<n;i++)
        {
            p.push(make_pair(end[i],start[i]));
        }
        
        auto it=p.top();
        int s=it.second;
        int e=it.first;
        p.pop();
        int count=1;
        while(!p.empty())
        {
            auto itr=p.top();
            p.pop();
            if(itr.second>e)
            {
                count++;
                s=itr.second;
                e=itr.first;
                
            }
        }
        return count;
    }
};
