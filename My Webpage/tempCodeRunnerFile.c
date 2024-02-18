#include<stdio.h>
void f(int *p, int *q)
{
  p = q;
 *p = 2;
}
int i = 0, j = 1;
int main()
{
  f(&i, &j);
  printf("%u %u n", &i, &j);
  getchar();
  return 0;
}