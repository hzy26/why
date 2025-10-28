//3.5用const常量定义 π 
#include<stdio.h>
int main(void) 
{
	const double PI = 3.14159;
	double r;
	printf("请输入球的半径：\n");
	scanf("%lf",&r);
	printf("球的体积为：%lf\n", PI*r*r*r);
	printf("球的表面积为：%lf\n", 4*PI*r*r);
	return 0;
}

//3.5用宏定义 π 
#include<stdio.h>
#define PI 3.14159
int main(void) 
{
	double r;
	printf("请输入球的半径：\n");
	scanf("%lf",&r);
	printf("球的体积为：%lf\n", PI*r*r*r);
	printf("球的表面积为：%lf\n", 4*PI*r*r);
	return 0;
}

//5.2
#include<stdio.h>
#include<math.h>
int main(void) 
{
	int a, b, c;
	printf("请依次输入三角形三边的长(用空格分隔4)：\n");
	scanf("%d %d%d",&a, &b, &c);
	if (a+b>c && a+c>b && b+c>a)
	{
	double s = (a+b+c)/2, area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("三角形的面积为：%.2lf\n",area); 
	}
	else printf("输入边长无法构成三角形！\n");
	return 0;
}

//5.9
#include<stdio.h>
int main(void) 
{
	int score;
	printf("Please enter score:");
	scanf("%d",&score);
	if (score<=100 && score>=90) printf("grade = A");
	else if (score<90 && score>=80) printf("grade = B");
	else if (score<80 && score>=70) printf("grade = C");
	else if (score<70 && score>=60) printf("grade = D");
	else printf("grade = E");
	return 0;
}

//5.11
#include<stdio.h>
int main(void) 
{
	double faHeight,moHeight,yourHeight;
	char sex,sport,diet;
	printf("请分别输入你父亲和母亲的身高(cm)（用空格分隔）：\n"); 
	scanf("%lf %lf",&faHeight,&moHeight);
    getchar();
	printf("请输入你的性别（男(M)女(F)）：\n"); 
	scanf("%c",&sex); 
	getchar();
	printf("是(Y)否(N)喜爱体育锻炼：\n");
	scanf("%c",&sport);
	getchar();
	printf("是(Y)否(N)有良好的饮食习惯：\n");
	scanf("%c",&diet);
	if(sex == 'M') {
		if(sport == 'Y' && diet == 'Y') yourHeight = (faHeight+moHeight) * 0.54 * 1.02 * 1.015;
		else if(sport == 'Y' && diet == 'N') yourHeight = (faHeight+moHeight) * 0.54 * 1.02 ;
		else if(sport == 'N' && diet == 'Y') yourHeight = (faHeight+moHeight) * 0.54 * 1.015;
		else if(sport == 'N' && diet == 'N') yourHeight = (faHeight+moHeight)* 0.54;
	}
	else{
		if(sport == 'Y' && diet == 'Y') yourHeight = (faHeight*0.923+moHeight) / 2 * 1.02 * 1.015;
		else if(sport == 'Y' && diet == 'N') yourHeight = (faHeight*0.923+moHeight)  / 2 * 1.02 ;
		else if(sport == 'N' && diet == 'Y') yourHeight = (faHeight*0.923+moHeight) / 2 * 1.015;
		else if(sport == 'N' && diet == 'N') yourHeight = (faHeight*0.923+moHeight) / 2;
	}
	printf("你的身高为：%.2lf", yourHeight);
	return 0;
}













