#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n; vector<int>v; vector<int>vo; vector<int>ve;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }

   for(int i=0;i<=(n/2)-1;i++)
   {
       int c=int(log10(a[i])+1);
       //cout<<"no of digits:"<<c;
       int f=a[i]/(pow(10,c-1));
      // cout<<"first dig:"<<f<<endl;
       v.push_back(f);


   }


   for(int i=n/2;i<n;i++)
   {
       int last=a[i]%10;
       //cout<<"last dig is:"<<last;
       v.push_back(last);
   }

   for(int i=0;i<v.size();i++)
   {
       if(i%2==0)
       {
           vo.push_back(v[i]);
       }
       else if(i%2!=0)
       {
           ve.push_back(v[i]);
       }
   }

   int res1=accumulate(vo.begin(),vo.end(),0);
   int res2=accumulate(ve.begin(),ve.end(),0);
   int diff=abs(res1-res2);

   if(diff==0 || diff%11==0)
    cout<<"OUI"<<endl;
   else
    cout<<"NON"<<endl;







}

