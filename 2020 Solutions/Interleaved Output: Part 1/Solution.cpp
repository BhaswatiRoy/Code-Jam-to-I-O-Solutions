#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    //possible combinations -> IO, Io, iO, io
    for(int i=0;i<t;i++)
    {
    	string s;
        cin>>s;
        int small=0,big=0,count=0;
        for(int j=0;j<s.length();j++)
        {
            //count big for I
            if(s[j]=='I')
            {
                big++;
            }
            //count small for i
            else if(s[j]=='i')
            {
                small++;
            }
            //reduce count for big/small whichever is >0 as whichever is added will have >0 count
            //preferably we consider IO for our final count
            else if(s[j]=='O')
            {
                if(big>0)
                {
                    big--;
                    count++;
                }
                else if(small>0)
                {
                    small--;
                }
            }
            else if(s[j]=='o')
            {
                if(small>0)
                {
                    small--;
                }
                else if(big>0)
                {
                    big--;
                }
            }
        }
        cout<<"Case #"<<i+1<<": "<<count<<endl;
    }
}
