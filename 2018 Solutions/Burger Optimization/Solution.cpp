#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int k,x;
        cin>>k;
        vector<int>optimal;
        //k is even
        if(k%2==0)
        {
        	for(int a=0;a<k/2;a++)
            {
                optimal.push_back(a);
            }
            for(int b=k/2-1;b>=0;b--)
            {
                optimal.push_back(b);
            }
        }
        //k is odd
        else if(k%2!=0)
        {
        	for(int a=0;a<k/2;a++)
            {
                optimal.push_back(a);
            }
            for(int b=k/2;b>=0;b--)
            {
                optimal.push_back(b);
            }
        }
        vector<int>v;
        while(k--)
        {
            //given distance to bun values taken
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        vector<int>odd,even;
        for(int j=0;j<v.size();j++)
        {
            if(j%2==0)
            {
                even.push_back(v[j]);
            }
            else
            {
                odd.push_back(v[j]);
            }
        }
        reverse(odd.begin(),odd.end());
        for(int l=0;l<odd.size();l++)
        {
            even.push_back(odd[l]);
        }
        int error=0;
        for(int p=0,q=0;p<optimal.size(),q<even.size();p++,q++)
        {
            int lse=((optimal[p]-even[q])*(optimal[p]-even[q]));
            error+=lse;
        }
        cout<<"Case #"<<i+1<<": "<<error<<endl;
    }
}
