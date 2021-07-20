#include <stdio.h>
int main() {
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if(a*a+b*b==c*c){
		printf("YES");
	}
	else if (b*b+c*c==a*a)
	{
		printf("YES");
	}
	else if (a*a+c*c==b*b)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}