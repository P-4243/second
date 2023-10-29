/*Question -: A math game is introduced in a school competition to test the skills of students. The game deals with Prime numbers.
The game rules are as follows:

From the given set of distinct natural numbers as input, consider the smallest natural number as q.
Your task is to compute the smallest prime number (p) such that when p is divided by all the distinct numbers in the input, except q, should result q as the remainder.
Constraints :

1 < n < 11
p < 10 ^ 10
Input :
Input consists of n+1 number of distinct natural numbers separated by spaces.
 
Output :
Print single integer p if such a p exists, else print “None”.*/

#include<iostream>
using namespace std;
int main()
{int n=4,a[4],i,p,q,large,j,temp,gd;
cout<<"enter array elements";
for(i=0;i<n;i++)
    cin>>a[i];
q=a[0];
for(i=0;i<n;i++)
{if(a[i]<q)
 q=a[i];
 }//q is smallest
for(i=0;i<n;i++)
{for(j=0;j<n-1-i;j++)
 {if(a[j]>a[j+1])
  {temp=a[j+1];
   a[j+1]=a[j];
   a[j]=temp;
  }
 }//array is in ascending order
}
gd=1;
 large=a[n-1];
 int count=0;
 for(j=1;j<20;j++)
     {for(i=0;i<n;i++)
     {large=large*j;
     if(large%a[i]==0)
        {count++;
        }
     }}
     if(count==n)
        gd=large;
     else
        for(i=0;i<n;i++)
        {gd=a[i]*gd;}

p=gd+q;
 cout<<"p="<<p;
 return 0;
}
