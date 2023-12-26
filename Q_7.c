#include<stdio.h>
#include<string.h>

void main(){
	char s[1000];
	int i , words = 0;
	
	printf("Enter string: \n");
	gets(s);
	
	for(i=0;s[i];i++){
		words++;
	}
	Printf("Number of elements: %d\n",words);
}
