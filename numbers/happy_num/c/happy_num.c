/*
 * Created:  Tue 30 May 2017 12:43:28 PM PDT
 * Modified: Sun 11 Jun 2017 06:20:58 PM PDT
 *
 * Copyright 2017 (C) Robert Gill
 *
 */

#include <stdio.h>
#include <stdlib.h>

int
sum_sqr_digits (int num)
{
  int digit;
  int sum = 0;

  while (num > 0)
    {
      digit = num % 10;
      sum += digit * digit;
      num /= 10;
    }

  return sum;
}

int
is_happy (int num)
{
  do num = sum_sqr_digits (num);
  while (num != 1 && num > 9);
  return (num == 1);
}

int
main (int argc, char **argv)
{
  int count = 0, num = 2;

  while (count < 8)
    {
      if (is_happy (num))
        {
          printf ("%d is a Happy Number!\n", num);
          count += 1;
        }
      num += 1;
    }

  return EXIT_SUCCESS;
}
