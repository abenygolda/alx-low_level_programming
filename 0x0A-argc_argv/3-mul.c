/*this is about the argc ana argv
 *I am abenezer Golda 
*/
#include<stdio.h>
#include<stdlib.h>

int main (int argc, char* argv[])//this is a main function that it takes arguments.
{
int i; 

if(argc!=3){
	printf("This is Error. add two arguments\n");
	return 1;
	}
int mult=1;
for(i=1;i<3;i++){
	mult=mult*atoi(argv[i]);
}	
printf("the product of the numbers is %d\n",mult);	
return 0;
}
