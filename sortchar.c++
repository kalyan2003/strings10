//Sort Characters by frequency

class Solution {
public:
    string frequencySort(string s) {
        sort(s.begin(),s.end());
        vector<string>v;
       
        int i=0,j=0;
        string sub;
        while(j<s.size())
        {
            if(s[j-1] != s[j])
            {
                sub=s.substr(i,j-i);
                v.push_back(sub);
                sub="";
                i=j;
            }
            j++;
        }

        sub=s.substr(i,j-i);
        v.push_back(sub);

       for(int i=0;i<v.size();i++)
      {
        for(int j=0;j<v.size()-i-1;j++)
        {
            if(v[j].length() < v[j+1].length())
            {
                string temp=v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
            }
        }
    }
    
    string ans;
    for(int k=0;k<v.size();k++)
    {
        ans += v[k];
    }
       return ans; 
    }
};