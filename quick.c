#include <stdio.h>

int adjust(int s[], int first, int last)
{
  int i=first;
  int j=last;
  int x=s[i];
  while(i<j)
  {
    while(i<j && s[j]>=x)
      j--;
    if(i<j)
    {
      s[i]=s[j];
      i++;
    }
    while(i<j && s[i]<=x)
      i++;
    if(i<j)
    {
      s[j]=s[i];
      j--;
    }
  }
  s[i]=x;
  return i;
}

void quick_sort(int s[], int first, int last)
{
  if(first<last)
  {
    int mid=adjust(s, first, last);
    quick_sort(s,first,mid-1);
    quick_sort(s,mid+1,last);
  }
  return;
}

int main(int argc, char *argv[])
{
  int i;
  int s[]={4,7,9,34,0,2,3333,1,24,54,56};
  int tmp[100]={0};
  quick_sort(s, 0, sizeof(s)/sizeof(s[0])-1);
  for(i=0; i<sizeof(s)/sizeof(s[0]); i++)
  {
    printf("%d\n", s[i]);
  }
  return 0;
}
