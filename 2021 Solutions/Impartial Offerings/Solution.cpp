#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    vector<int>v;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int x;
        for(int j=0;j<n;j++)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        int sum=0,tempsum=1;
        for(int k=1;k<v.size();k++)
        {
            if(v[k]>v[k-1])
            {
                tempsum++;
                sum+=tempsum;
            }
            else
            {
                sum+=tempsum;
            }
        }
        sum++;
        cout<<"Case #"<<i+1<<": "<<sum<<endl;
        v.clear();
    }
}
