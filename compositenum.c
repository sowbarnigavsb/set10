#include <stdio.h>

int main(void) {
	int n,i,count=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		count++;
	}
	if(count!=2)
	printf("Composite number");
	else
	printf("Not acomposite number");
	// your code goes here
	return 0;
}
