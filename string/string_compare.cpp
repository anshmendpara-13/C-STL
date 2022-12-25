/* strncmp example */
#include <stdio.h>
#include <string.h>

int main ()
{
  char str[][5] = { "R2D2" , "C3PO" , "R2A6" };
  int n;
  puts ("Looking for R2 astromech droids...");
  for (n=0 ; n<3 ; n++)
    if (strncmp (str[n],"R2xx",2) == 0)
    {
      printf ("found %s\n",str[n]);
    }
  return 0;
}

// int main()
// {
//     char a[100], b[100];
//     printf("Enter first string : ");
//     gets(a);
//     printf("Enter second string : ");
//     gets(b);


//     // int d =  strcmp(a,b);
//     // printf("%d",d);
//     // both are same so print 0 and diff so print -1


//     if (sizeof(a) > sizeof(b))
//     {
//         printf("1");
//     }
//     else if (sizeof(a) < sizeof(b))
//     {
//         printf("-1");
//     }
//     else
//     {
//         strncmp(a, b, sizeof(a));
//         if (strcmp(a, b) == 0)
//         {
//             printf("true");
//         }
//         else
//         {
//             printf("false");
//         }
//     }
//     return 0;
// }