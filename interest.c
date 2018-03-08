#include <stdio.h>
#include<math.h>
int main(void) {
	int amount,month;
	float interestfor100rs;
	scanf("%d%d%f",&amount,&month,&interestfor100rs);
            int totalinterest=amount*month*interestfor100rs/100;
           int a=floor(totalinterest);
            printf("%d",a);
            return 0;
}
