#include <stdio.h>
void bubble_sort(int s[], int n)
{
  int i,j;
  int tmp;
  int flag;
  for(i=0; i<n-1; i++)
  {
    flag=0;
    for(j=0; j<n-i-1; j++)
    {
      if(s[j]>s[j+1])
      {
        tmp=s[j];
        s[j]=s[j+1];
        s[j+1]=tmp;
        flag=1;
      }
    }
    if(flag==0)
      return;
  }
  return;
}

int main(int argc, char *argv[])
{
  int i;
  int s[]={4,7,9};
  bubble_sort(s, sizeof(s)/sizeof(s[0]));
  for(i=0; i<sizeof(s)/sizeof(s[0]); i++)
  {
    printf("%d\n", s[i]);
  }
  return 0;
}
