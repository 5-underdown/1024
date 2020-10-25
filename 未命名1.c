#include <stdio.h>
#include <math.h>
int main(){
	int i,l,o,v,e,u;
	printf("今日的浪漫\n");
	u=2*2*2*2*2*2*2*2*2*2;
	printf("今天是%d\n",u);
	printf("第二次的输入请按0\n");
	printf("请输入0~3：\n");
	
	scanf("%d",&i);
	if(i==0){
		printf("C:printf('Hello 1024')\n");
		printf("小情话：");
		scanf("%d",&l);
		if(l==0){
			printf("在程序的世界里C是第一，而在我的世界里你是第一^_^\n"); 
		}
		else
		printf("你输入错误数字，但错再多我也会教你做对^_^\n");
	}
	else if(i==1){
		printf("kotlin:fun main(args):Array<string>{\n");
		printf("println('Hello,1024!')\n");
		printf("}\n");
		printf("小情话：");
		scanf("%d",&l);
		//printf("小情话：");
		if(l==0){
			printf("程序面向对象，我面向你^_^\n");
		}
		else
		printf("你输入错误数字，但错再多我也会教你做对^_^\n");
	}
		else if(i==2){
		printf("Dart:main(){\n");
		printf("print('Hello,1024')\n");
		printf("}\n");
		printf("小情话：");
		scanf("%d",&l);
		if(l==0){
			printf("谷歌是我的搜索引擎，你是我的动力引擎^_^"); 
		}
		else
		printf("你输入错误数字，但错再多我也会教你做对");
	}
	else if(i==3){
		printf("Rust:fn main(){\n");
		printf("println('Hello,world!')\n");
		printf("}\n");
		printf("小情话：");
		scanf("%d",&l);
		if(l==0){
			printf("今天1024，听我的，一起出去逛街^_^"); 
		}
		else
		printf("你输入错误数字，但错再多我也会教你做对^_^");
	}
	else
	printf("从0开始，爱你一生"); 
	return 0;
} 
