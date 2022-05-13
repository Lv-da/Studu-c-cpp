#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
stack<int> s[100005];

int main()
{
    int n,m=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        if(s[m].empty())
        {
            s[m].push(x);
            cout<<"0 ";
        }
        else
        {
            if(s[m].top()>=x)
            {
                cout<<"0 ";
                m++;
                s[m].push(x);
            }
            else
            {
                s[m].push(x);
                int ans=s[m].size();
                int k=m-1;
                while(k>=1 && s[k].top()<x)
                {
                    ans+=s[k].size();
                    k--;
                }
                cout<<ans-1<<" ";
            }
        }
    }
    return 0;
}