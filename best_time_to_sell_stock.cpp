#include<bits/stdc++.h>
using namespace std;

int best_time_to_buy_and_sell_stock(vector<int> v, int n)
{
    int max_value = 0;
    int min_value = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(v[i] < min_value)
            min_value = v[i];
        else if(v[i] - min_value > max_value)
            max_value = v[i] - min_value;
    }
    return max_value;

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
    cout<<best_time_to_buy_and_sell_stock(v,n)<<endl;


}

