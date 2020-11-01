#include <stdio.h>
#define max 10
int main(){
	int s,b[max],k,x;
	int i=0;
	while(1){
	printf("请输入你认为有特殊意义的正整数(小于10位)：");
	scanf("%d",&s);
	int n=0;
	if(s>0){
		k=s;
		printf("这是你的数字新的形式:\n");
		while(k>0){
			k=k/10;
			n++;
		}
		for(i=0;i<n;i++){
			x=s%10;
			s=s/10;
			x=x+9;
			x=x%10;
			b[i]=x;
			printf("%d",b[i]);
		}
		printf("\n");
	}
	else
	printf("这是错误输入，请输入非零正整数= =\n");
}
	return 0;

}

