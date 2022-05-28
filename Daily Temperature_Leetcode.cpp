class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures)
    {
        
        int len=temperatures.size();

      vector<int> answer(len,0);
        stack<int>stck;

        for( auto i=0; i<len; i++)
        {
            while(!stck.empty() && temperatures[stck.top()]<temperatures[i])
            {
                answer[stck.top()]=(i-stck.top());
                stck.pop();
            }
            stck.push(i);
        }

        for( auto i=0; i<len; i++)
        {
            cout<<answer[i]<<"";
        }
     return answer;
    }
};
