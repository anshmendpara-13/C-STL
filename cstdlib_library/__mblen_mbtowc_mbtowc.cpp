/* mblen example */
#include <stdio.h>  /* printf */
#include <stdlib.h> /* mblen, mbtowc, wchar_t(C) */

void printbuffer(const char *pt, size_t max)
{
    int length;
    wchar_t dest;

    mblen(NULL, 0);        /* reset mblen */
    mbtowc(NULL, NULL, 0); /* reset mbtowc */

    while (max > 0)
    {
        length = mblen(pt, max);
        if (length < 1)
        {
            break;
        }
        // length = mbtowc(&dest,pt,max);
        mbtowc(&dest, pt, length);
        printf("[%lc]", dest);
        pt += length;
        max -= length;
    }
}

int main()
{
    const char str[] = "test string";

    printbuffer(str, sizeof(str));

    return 0;
}

// function

// wctomb
/*
code :-

// wctomb example 
#include <stdio.h>      // printf 
#include <stdlib.h>     // wctomb, wchar_t(C)

int main() {
  const wchar_t str[] = L"wctomb example";
  const wchar_t* pt;
  char buffer [MB_CUR_MAX];
  int i,length;

  pt = str;
  while (*pt) {
    length = wctomb(buffer,*pt);
    if (length<1) break;
    for (i=0;i<length;++i) printf ("[%c]",buffer[i]);
    ++pt;
  }

  return 0;
}

*/