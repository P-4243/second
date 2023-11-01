/*Consider a Jug of capacity L liters. Given N cups of different capacities Ci (in liters), fill the Jug with the help of cups, according the specification.
The specification according to which the cups may be used to fill the Jug is as below:

* Cups can be used integral number of times i.e., zero or more times, but never partially i.e., a cup of 1L can be used 0, 1, 2 etc. times, but never 0.5, 1.5, 2.5 .. times
*The Jug must not overflow because of cup filling the Jug
*The number of distinct cups (i.e., different cup sizes) used to fill the Jug must be maximized
*The summation of number of times all cups are used must be minimized.
Consider point 3 to be more important than point 4 when meeting the optimisation goals.
First line contains an integer N denoting the number of cups available.
Second line contains N space separated integers denoting the capacity of the cups.
Third line contains an integer L which denotes the capacity of Jug in liters.*/
   

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
