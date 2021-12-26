#include <stdio.h>
#include <conio.h>
int LCM(int,int);

int main()
{
	int a,b,result;
	printf("Enter 2 numbers:");
	scanf("%d %d",&a,&b);
	result=LCM(a,b);
	printf("The LCM of %d and %d is:%d ",a,b,result);
	return 0;
}

int LCM(int a,int b)
{
	static int ans=1;
	if(ans%a==0 && ans%b==0)
	 {
	 	return ans;
	 }
	 else
	 {
	ans++;
	LCM(a,b);
	return ans;
}
}
