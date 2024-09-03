#include<bits/stdc++.h>
using namespace std;

vector<int> two_sum(int n, vector<int> v, int val)
{
    int pos1,pos2;
    unordered_map<int ,int> m;
    for(int i=0;i<n;i++)
    {
        int x = val - v[i];
        if(m.find(x) != m.end())
            return {i, m[x]};
        m[v[i]] = i;
    }
    return {-1, -1};

}
int main()
{
    int n,val;
    cin>>n;
    vector<int> v,res;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        v.push_back(num);
    }
    cin>>val;
    res = two_sum(n, v, val);
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";

}

