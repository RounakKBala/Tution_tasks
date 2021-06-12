//Print Fibonacci Series upto n terms
#include<stdio.h>
int fibonacci_series(int n){
	int a=0,b=1,c=0, i;
	for(i=1 ; i<=n ; i++){
		printf("%d ", a);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}

int main(){
	int n;
	printf("\nEnter the number of terms : ");
	scanf("%d", &n);
	printf("\nThe fibonacci series up to %d terms is: \n");
	fibonacci_series(n);
   return 0;
}
