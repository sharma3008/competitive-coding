
#include<bits/stdc++.h>
using namespace std;
vector<int> product_of_array(vector<int> v)
{
    vector<int> v1(v.size(),1),v2(v.size(),1),res;
    v1[0] = 1;
    v2[v.size()-1] = 1;
    for(int i=1;i<v.size();i++)
        v1[i] = v1[i-1] * v[i-1];
    for(int i = v.size()-2;i>=0;i--)
        v2[i] = v2[i+1] * v[i+1];
    for(int i=0;i<v.size();i++)
    {
        int val = v1[i] * v2[i];
        res.push_back(val);
    }

    return res;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        v.push_back(num);
    }
    vector<int> res;
    res = product_of_array(v);
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
}

