/* This is the famous, coveted Hello World */

#include<stdio.h>

int main(int argc, char **argv)
{
     if(argc == 2) {
	  printf("Hello, %s!\n", argv[1]);
     }
     else {
	  printf("Hello, Github world!\n");
     }

     return 0;
}
