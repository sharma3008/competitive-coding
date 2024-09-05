#include<bits/stdc++.h>
using namespace std;

vector<int> find_duplicates(vector<int> v)
{
    vector<int> res;
    for(int i=0;i<v.size();i++)
    {

        if(v[abs(v[i]-1)] < 0)
            res.push_back(v[i]);
        v[abs(v[i]) - 1] *= -1;
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
        int val;
        cin>>val;
        v.push_back(val);
    }

    vector<int> res = find_duplicates(v);
    for(int i=0;i<res.size();i++)
        cout<<res[i]<< " ";
}
