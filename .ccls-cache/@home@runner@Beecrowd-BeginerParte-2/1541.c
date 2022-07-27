#include <stdio.h>
#include <math.h>

int
main ()
{

  float a, b, c;
  a = b = c = 1;


  scanf ("%f", &a);
  while (a != 0)
    {
      scanf ("%f %f", &b, &c);


      printf ("%d\n", (int) sqrt ((a * b) / (c / 100)));

      scanf ("%f", &a);
    }

  return 0;
}
