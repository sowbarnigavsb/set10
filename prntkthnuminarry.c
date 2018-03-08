#include <stdio.h>

int main(void) {
	int n,k,a[100],i;
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	if(k<n)
	printf("%d",a[k]);
	else
	printf("warning,K should less than n");
	return 0;
}
