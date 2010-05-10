/* This is the famous, coveted Hello World */

#include<stdio.h>

int main(int argc, char **argv)
{
     if(argc == 2) {  /* Custom greeting */
	  printf("Hello, %s!\n", argv[1]);
     }
     else {           /* Default greeting */
	  printf("Hello, Github world!\n");
     }

     return 0;
}
