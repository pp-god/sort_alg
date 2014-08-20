#include <stdio.h>

void merge(int s[], int first, int mid, int last, int sort[])
{
  int i=first;
  int j=mid+1;
  int k=0;
  while(i<= mid && j<=last)
  {
    if(s[i]<=s[j])
      sort[k++]=s[i++];
    else
      sort[k++]=s[j++];
  }
  while(i<=mid)
    sort[k++]=s[i++];
  while(j<=last)
    sort[k++]=s[j++];
  for(i=0; i<k; i++)
    s[first+i]=sort[i];
  return;
}

void merge_sort(int s[], int first, int last, int sort[])
{
  if(first<last)
  {
    int mid=(first+last)/2;
    merge_sort(s,first,mid,sort);
    merge_sort(s,mid+1,last,sort);
    merge(s,first,mid,last,sort);
  }
  return;
}

int main(int argc, char *argv[])
{
  int i;
  int s[]={4,7,9,34,0,2,3333,1,24,54,56};
  int tmp[100]={0};
  merge_sort(s, 0, sizeof(s)/sizeof(s[0])-1, tmp);
  for(i=0; i<sizeof(s)/sizeof(s[0]); i++)
  {
    printf("%d\n", s[i]);
  }
  return 0;
}
