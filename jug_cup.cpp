#include<iostream>
using namespace std;
int main()
{int i,n,cup[4],jug,ans[4],check=0,j;
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
 for(i=n-1;i>=0;--i)
    {
        int enq=jug%cup[i];
        for(j=n-1;j>=0;--j)
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


    if(check==0)
    {
        for(i=0;i<n;++i)
        {
            jug=jug-cup[i];
            ++ans[i];
        }
       for(i=n-1;i>=0;--i)
    {
        int enq=jug%cup[i];
        for(j=n-1;j>=0;--j)
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
     for(i=0;i<n;++i)
        {cout<<cup[i]<<" "<<ans[i]<<endl;}



        return 0;

}
