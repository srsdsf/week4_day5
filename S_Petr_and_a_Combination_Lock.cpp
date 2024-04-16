#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        bool flag=0;
        for(int i=0; i<(1<<n); i++)
        {
            int sum=0;
            for(int j=0; j<n; j++)
            {
                if(i&(1<<j)) sum+=a[j];  //clockwise 
                else sum-=a[j];  //anticlockwise
            }
            if(sum % 360==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        } 
}