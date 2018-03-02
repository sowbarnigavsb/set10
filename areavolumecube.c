#include <stdio.h>

int main(void) {
	int l,b,h;
	scanf("%d%d%d",&l,&b,&h);
	printf("Surface is %d\n",2*(l*b+b*h+l*h));
            printf("Volume is %d",l*b*h);
	// your code goes here
	return 0;
}
