#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll max(ll a,ll b)
{
    if(a>=b)
        return a;
    else
        return b;
}
ll min(ll a,ll b)
{
    if(a>=b)
        return b;
    else
        return a;
}
ll diff(ll a,ll b)
{
    if(a>=b)
        return a-b;
    else
        return b-a;
}
void pairsort(int a[], int b[], int n)
{
    pair<int, int> pairt[n];
 

    for (int i = 0; i < n; i++) 
    {
        pairt[i].first = a[i];
        pairt[i].second = b[i];
    }

    sort(pairt, pairt + n);

    for (int i = 0; i < n; i++) 
    {
        a[i] = pairt[i].first;
        b[i] = pairt[i].second;
    }
}
const int N = 105;
int a[N],b[N];
bool vis[N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    int n=s.length();
    if(n>=3)
    {
        int a[n];
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+(int)s[i]-48;
            a[i]=((int)s[i]-48)%3;
        }
        if(sum%3==0)
        {
            cout<<s;
        }
        else
        {
            string ans1,ans2;
            if(sum%3==1)
            {
                int i;
                for(i=n-1;i>=0;i--)
                {
                    if(a[i]==1)
                    {
                        break;
                    }
                }
                
                int j;
                string str2;
                for(j=0;j<n;j++)
                {
                    if(j==i)
                    continue;
                    str2.push_back(s[j]);
                    
                }
                j=0;
                while(j<str2.size()&&str2[j]=='0')
                j++;
                if(j==str2.size())
                ans1="0";
                else
                {
                    for(int i=j;i<str2.size();i++)
                    {
                        ans1.push_back(str2[i]);
                    }
                }if(i==-1)
                    {
                        ans1="";
                    }
                int cnt=2;
                string str3=s;
                for(int i=n-1;i>=0&&cnt>0;i--)
                {
                    if(a[i]==2)
                    {
                        str3[i]='.';
                        cnt--;
                    }
                }
                str2.clear();
                if(cnt!=0)
                cout<<ans1;
                else
                {
                    for(int i=0;i<n;i++)
                    {
                        if(str3[i]=='.')
                        continue;
                        str2.push_back(str3[i]);
                    }
                    j=0;
                    while(j<str2.size()&&str2[j]=='0')
                    j++;
                    if(j==str2.size())
                    ans2="0";
                    else
                    {
                        for(int i=j;i<str2.size();i++)
                        {
                            ans2.push_back(str2[i]);
                        }
                    }
                    if(ans1.size()>ans2.size())
                    {
                        cout<<ans1;
                    }
                    else
                    cout<<ans2;
                }
                
            }
            else
            {
                string ans1,ans2;
                if(sum%3==2)
                {
                    int i;
                    for(i=n-1;i>=0;i--)
                    {
                        if(a[i]==2)
                        {
                            break;
                        }
                    }
                    
                    int j;
                    string str2;
                    for(j=0;j<n;j++)
                    {
                        if(j==i)
                        continue;
                        str2.push_back(s[j]);
                        
                    }
                    j=0;
                    while(j<str2.size()&&str2[j]=='0')
                    j++;
                    if(j==str2.size())
                    ans1="0";
                    else
                    {
                        for(int i=j;i<str2.size();i++)
                        {
                            ans1.push_back(str2[i]);
                        }
                    }
                    if(i==-1)
                    {
                        ans1="";
                    }
                    int cnt=2;
                    string str3=s;
                    for(int i=n-1;i>=0&&cnt>0;i--)
                    {
                        if(a[i]==1)
                        {
                            str3[i]='.';
                            cnt--;
                        }
                    }
                    str2.clear();
                    if(cnt!=0)
                    cout<<ans1;
                    else
                    {
                        for(int i=0;i<n;i++)
                        {
                            if(str3[i]=='.')
                            continue;
                            str2.push_back(str3[i]);
                        }
                        j=0;
                        while(j<str2.size()&&str2[j]=='0')
                        j++;
                        if(j==str2.size())
                        ans2="0";
                        else
                        {
                            for(int i=j;i<str2.size();i++)
                            {
                                ans2.push_back(str2[i]);
                            }
                        }
                        if(ans1.size()>ans2.size())
                        {
                            cout<<ans1;
                        }
                        else
                        cout<<ans2;
                    }
                }
            }
        }    
    }
    else
    {
        int a[n];
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+(int)s[i]-48;
            a[i]=((int)s[i]-48)%3;
        }
        if(sum%3==0)
        {
            cout<<s;
            return 0;
        }
        if(sum%3==1)
        {
            int flag=0;
            for(int i=0;i<n;i++)
            {
                if(a[i]==1)
                {
                    s[i]='.';
                     flag=1;
                    break;
                   
                }
                
            }
            string ans3;
            if(flag)
            {
                for(int i=0;i<n;i++)
                {
                    if(s[i]=='.')
                    continue;
                    ans3.push_back(s[i]);
                }
                if(ans3.size()>0)
                cout<<ans3;
                else
                cout<<-1;
            }
            else
            cout<<-1;
        }
        else
        {
            string ans3;
            int flag=0;
            for(int i=0;i<n;i++)
            {
                if(a[i]==2)
                {
                    s[i]='.';
                    flag=1;
                    break;
                    
                }
                
            }
            if(flag)
            {
                for(int i=0;i<n;i++)
                {
                    if(s[i]=='.')
                    continue;
                    ans3.push_back(s[i]);
                }
                if(ans3.size()>0)
                cout<<ans3;
                else
                cout<<-1;
            }
            else
            cout<<-1;
        }
    }
    return 0;
}        