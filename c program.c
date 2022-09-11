#include<stdio.h>
int main()
{
  int n, i, *ptr, sum=0;
  scanf("%d", &n);
  ptr= (int*) malloc (n*sizeof(int));
  if(ptr==NULL)
  {
    printf("Memory not allocated.");
    return EXIT_FAILURE;
  }
  for(i=0;i<n;i++)
  {
     scanf("%d",ptr+i);
     sum += *(ptr+i);
  }
  printf("%d",sum);
  free(ptr);
  return 0;
}
