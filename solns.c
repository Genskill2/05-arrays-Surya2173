/* Enter your solutions in this file */
#include <stdio.h>


int max(int a[], int n)
{
  int max=a[0];
  for (int i=1;i<n;i++)
  {
      if(max<a[i])
      {
        max=a[i];
      }
  }
  return max;
}

int min (int a[],int n)
{
  int min=a[0];
  for (int i=1;i<n;i++)
  {
      if(min>a[i])
      {
        min=a[i];
      }
  }
  return min;
}


float average (int a[] , int n)
{
  int sum=0;
  for (int i=0;i<n;i++)
  {
    sum+=a[i];
  }
  return (sum/n);
}


int mode (int a[], int n)
{
  int mv=0,mc=0,c=0;
  for (int i=0;i<n;i++)
  {
    c=0;
    for (int j=0;j<n;j++)
    {
      if (a[i]==a[j])
      {
        c++;
      }
    }
    if (c>mc)
    {
      mc=c;
      mv=a[i];
    }
  }
  return mv;
}


int factors (int num, int b[])
{
  int c=0;int i=2;
  while(i<=num)
  {
    while (num%i==0)
    {
      num/=i;
      b[c]=i;c++;
    }
    i++;
    for (int j=2 ; j<i ;j++)
    {
      if (i%j==0)
      {
        i++;
      }
    }
  }
  return c;
}
