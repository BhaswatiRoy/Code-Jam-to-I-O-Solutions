#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int m=2*n;
        vector<int>prices;
        while(m--)
        {
            int x;
            cin>>x;
            //all sale & regular price in ascending order
            prices.push_back(x);
        }
        sort(prices.begin(),prices.end(),greater<int>());
        vector<int>sale;
        m=2*n;
        for(int j=0;j<prices.size();j++)
        {
            int regularprice=prices[j];
            int saleprice=(0.75*regularprice);
            for(int k=j+1;k<prices.size();k++)
            {
                if(prices[k]==saleprice)
                {
                    sale.push_back(prices[k]);
                    prices.erase(prices.begin()+k);
                    break;
                }
            }
        }
        sort(sale.begin(),sale.end());
        cout<<"Case #"<<i+1<<": ";
        //cout<<sale.size()<<endl;
        for(int p=0;p<sale.size();p++)
        {
            cout<<sale[p]<<" ";
        }
        cout<<endl;
    }
}
