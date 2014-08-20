#include <stdio.h>
void select_sort(int s[], int n)
{
  int i,j;
  int index;
  int tmp;
  for(i=0; i<n-1; i++)
  {
    index=i;
    for(j=i; j<n; j++)
      if(s[j]<s[index])
        index=j;
    if(index!=i)
    {
      tmp=s[index];
      s[index]=s[i];
      s[i]=tmp;
    }
  }
  return;
}

int main(int argc, char *argv[])
{
  int i;
  int s[]={12,4,7,9,0,24,354,4};
  select_sort(s, sizeof(s)/sizeof(s[0]));
  for(i=0; i<sizeof(s)/sizeof(s[0]); i++)
  {
    printf("%d\n", s[i]);
  }
  return 0;
}
