/* This is the famous, coveted Hello World */

#include<stdio.h>

int main(int argc, char **argv)
{
     switch(argc) {
     case 1:          /* Default greeting */
	  printf("Hello, Github world!\n");
	  break;
     case 2:          /* Custom greeting */
	  printf("Hello, %s!\n", argv[1]);
	  break;
     default:
	  printf("Invalid number of arguments.\n");
     }

     return 0;
}
