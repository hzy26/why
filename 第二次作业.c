//3.5��const�������� �� 
#include<stdio.h>
int main(void) 
{
	const double PI = 3.14159;
	double r;
	printf("��������İ뾶��\n");
	scanf("%lf",&r);
	printf("������Ϊ��%lf\n", PI*r*r*r);
	printf("��ı����Ϊ��%lf\n", 4*PI*r*r);
	return 0;
}

//3.5�ú궨�� �� 
#include<stdio.h>
#define PI 3.14159
int main(void) 
{
	double r;
	printf("��������İ뾶��\n");
	scanf("%lf",&r);
	printf("������Ϊ��%lf\n", PI*r*r*r);
	printf("��ı����Ϊ��%lf\n", 4*PI*r*r);
	return 0;
}

//5.2
#include<stdio.h>
#include<math.h>
int main(void) 
{
	int a, b, c;
	printf("�������������������ߵĳ�(�ÿո�ָ�4)��\n");
	scanf("%d %d%d",&a, &b, &c);
	if (a+b>c && a+c>b && b+c>a)
	{
	double s = (a+b+c)/2, area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("�����ε����Ϊ��%.2lf\n",area); 
	}
	else printf("����߳��޷����������Σ�\n");
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
	printf("��ֱ������㸸�׺�ĸ�׵����(cm)���ÿո�ָ�����\n"); 
	scanf("%lf %lf",&faHeight,&moHeight);
    getchar();
	printf("����������Ա���(M)Ů(F)����\n"); 
	scanf("%c",&sex); 
	getchar();
	printf("��(Y)��(N)ϲ������������\n");
	scanf("%c",&sport);
	getchar();
	printf("��(Y)��(N)�����õ���ʳϰ�ߣ�\n");
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
	printf("������Ϊ��%.2lf", yourHeight);
	return 0;
}












