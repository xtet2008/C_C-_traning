#include<stdio.h>
#define pi 3.1415926 /* ���峣�� */
double area(double r); //������������ĺ���ԭ��
double perimeter(double r); /*���������ܳ��ĺ���ԭ��*/
void main(void)
{
	float r; /* �������r ����Բ�İ뾶*/
	double s,l; // �����������������ܳ�
	printf("������Բ�İ뾶��"); //��ʾ��ʾ��Ϣ
	scanf("%f",&r);
	s=area(r);
	l=perimeter(r);
	printf("�뾶R=%.2f,���S=%.2f \n",r,s);
	printf("�뾶R=%.2f,�ܳ�L=%.2f \n",r,l);
}

double area(double r)
{
	double s;
	s=pi*r*r;
	return s;
}

double perimeter(double r)
{
	double l;
	l=pi*2*r;
	return l;
}
