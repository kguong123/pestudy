#include <stdio.h>
#include <windows.h>
#include <winnt.h>
int main(void)
{
  printf("sizeof IMAGE_DOS_HEADER: %d\n", sizeof(IMAGE_DOS_HEADER));
  printf("sizeof IMAGE_NT_HEADERS: %d\n", sizeof(IMAGE_NT_HEADERS));
  printf("Test\n");
  printf("First Patch\n");
  printf("Second Patch\n");
  printf("Third Patch\n");
  //test comment
  //test

  return 0;
}
