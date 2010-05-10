/* This is the famous, coveted Hello World */

#include<stdio.h>

int main(int argc, char **argv)
{
     switch(argc) {
     case 1:
	  printf("Hello, Github world!\n");
	  break;
     case 2:
	  printf("Hello, %s!\n", argv[1]);
	  break;
     default:
	  printf("Invalid number of arguments.\n");
     }

     return 0;
}
