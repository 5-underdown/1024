#include <stdio.h>
#include <math.h>
int main(){
	int i,l,o,v,e,u;
	printf("���յ�����\n");
	u=2*2*2*2*2*2*2*2*2*2;
	printf("������%d\n",u);
	printf("�ڶ��ε������밴0\n");
	printf("������0~3��\n");
	
	scanf("%d",&i);
	if(i==0){
		printf("C:printf('Hello 1024')\n");
		printf("С�黰��");
		scanf("%d",&l);
		if(l==0){
			printf("�ڳ����������C�ǵ�һ�������ҵ����������ǵ�һ^_^\n"); 
		}
		else
		printf("������������֣������ٶ���Ҳ���������^_^\n");
	}
	else if(i==1){
		printf("kotlin:fun main(args):Array<string>{\n");
		printf("println('Hello,1024!')\n");
		printf("}\n");
		printf("С�黰��");
		scanf("%d",&l);
		//printf("С�黰��");
		if(l==0){
			printf("�������������������^_^\n");
		}
		else
		printf("������������֣������ٶ���Ҳ���������^_^\n");
	}
		else if(i==2){
		printf("Dart:main(){\n");
		printf("print('Hello,1024')\n");
		printf("}\n");
		printf("С�黰��");
		scanf("%d",&l);
		if(l==0){
			printf("�ȸ����ҵ��������棬�����ҵĶ�������^_^"); 
		}
		else
		printf("������������֣������ٶ���Ҳ���������");
	}
	else if(i==3){
		printf("Rust:fn main(){\n");
		printf("println('Hello,world!')\n");
		printf("}\n");
		printf("С�黰��");
		scanf("%d",&l);
		if(l==0){
			printf("����1024�����ҵģ�һ���ȥ���^_^"); 
		}
		else
		printf("������������֣������ٶ���Ҳ���������^_^");
	}
	else
	printf("��0��ʼ������һ��"); 
	return 0;
} 
