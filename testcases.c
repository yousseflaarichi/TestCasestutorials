
#define pair 0
#define odd 1
#define unknown 2
#include<stdio.h>
int a = 1;

int
readNumber (int number)
{
  int result = unknown;
  if (number % 2 == 0)
    {
      result = pair;

    }
  else
    {
      result == odd;
    }
  return result;
}

void
TestReadNumber (int value, int expectedResult)
{
  int result = readNumber (value);
  if (result == expectedResult)
    {
      printf ("Passed \n");
    }
  else
    {
      if (result == unknown)
	{
	  printf ("unexpected behavior \n");
	}
      else
	{
	  printf ("Fails \n");
	}

    }
}

int
main ()
{
  TestReadNumber (15, odd);
  TestReadNumber (257, odd);
  TestReadNumber (13, odd);
  TestReadNumber (12, pair);
  TestReadNumber (28, pair);

  scanf ("%d", &a);
  return a;
}

