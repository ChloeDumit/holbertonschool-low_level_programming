#include <stdio.h>
long int main(void)
{
long int i, t1 = 1, t2 = 2, nextTerm;
for (i = 1; i <= 50; ++i)
{
if (i >= 50)
{
printf("%ld\n", t1);
}
printf("%ld, ", t1);
nextTerm = t1 + t2;
t1 = t2;
t2 = nextTerm;
}
return (0);
}