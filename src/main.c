#include <isqrt.h>
#include <stdio.h>



int main(int argc,const char** argv){
	for (unsigned int x=1;x;x++){
		unsigned long long int y=isqrt(x);
		unsigned long long int m=(y-2)*(y-2);
		unsigned long long int n=(y+2)*(y+2);
		if (m>x||n<x){
			printf("ERROR: %u -> %llu\n",x,y);
		}
	}
	printf("End\n");
}
