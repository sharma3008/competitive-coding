

/*
vector<int> product_of_array(vector<int> v)
{
    vector<int> v1,v2,res;
    v1.push_back(v[0]);
    v2.push_back(v[v.size()-1]);
    for(int i=0;i<v.size()-1;i++)
    {
        int num = v[i] * v[i+1]
        v1.push_back(num);
    }
    for(int i = v.size()-1; i>0; i++)
    {
        int num = v[i] * v[i-1];
        v2.push_back(num);
    }
    for(int i=0;i<v.size();i++)
    {

    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<0;i++)
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

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{

        long long finalSum;
        cin>>finalSum;
        vector<long long> res;
        if(finalSum % 2 != 0)
            cout<<"no such numnbers"<<endl;

        long long temp=0;
        int indx = 1;
        while((temp + 2*indx) <= finalSum)
        {
            res.push_back(2*indx);
            temp = temp + 2*indx;
            indx++;
        }
        res[res.size() - 1] = res[res.size() - 1] + finalSum - temp;

        for(int i=0;i<res.size();i++)
            cout<<res[i]<<" ";

}
