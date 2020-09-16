#include <stdio.h>

int main ()
{
  freopen ("myfile.txt","w",stdout);
  printf ("and that piece of art is useful\" - Dora Korpar, 2015-10-19");
  fclose (stdout);
  return 0;
}
