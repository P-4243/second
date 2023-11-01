#include<iostream>
using namespace std;
void calc(int& n,int& jug,int cup[],int & check,int ans[]);
int main()
{int i,n,cup[4],jug,ans[4],check=0;
   cout<<"enter jug";
    cin>>jug;

    cout<<"enter n";
    cin>>n;
    cout<<"entre cups";
    for(i=0;i<n;++i)
    {ans[i]=0;
        cin>>cup[i];
        jug=jug-cup[i];
        ++ans[i];
    }
calc( n,jug,cup,check,ans);

    if(check==0)
    {
        for(i=0;i<n;++i)
        {
            jug=jug-cup[i];
            ++ans[i];
        }
 calc( n,jug,cup,check,ans);
    }
     for(i=0;i<n;++i)
        {cout<<cup[i]<<" "<<ans[i]<<endl;}



        return 0;

}
void calc(int& n, int& jug, int cup[],int& check,int ans[])
{for(int i=n-1;i>=0;--i)
    {
        int enq=jug%cup[i];
        for(int j=n-1;j>=0;--j)
        {
            if(enq%cup[j]==0)
            {
                check--;
                ans[j]+=enq/cup[j];
                ans[i]+=jug/cup[i];
                break;
            }
        }
       if(check!=0)
        break;
    }


}
