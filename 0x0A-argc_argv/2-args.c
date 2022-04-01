/*this is about the argc ana argv
 *I am abenezer Golda 
*/
#include<stdio.h>
#include<stdlib.h>

int main (int argc, char* argv[])//this is a main function that it takes arguments.
{
int i; 
for(i=0;i<argc;i++){
printf("%s\n",argv[i]);
}	
	
return 0;
}
