#include <stdio.h>
#define max 10
int main(){
	int s,b[max],k,x;
	int i=0;
	while(1){
	printf("����������Ϊ�����������������(С��10λ)��");
	scanf("%d",&s);
	int n=0;
	if(s>0){
		k=s;
		printf("������������µ���ʽ:\n");
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
	printf("���Ǵ������룬���������������= =\n");
}
	return 0;

}

