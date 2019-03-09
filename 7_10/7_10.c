//分档计算运费(switch 语句)

#include<stdio.h>

int main()
{
	int f;
	float d,a;

	printf("请输入运费金额：");
	scanf("%d",&f);

	switch(f/100)
	{
	case 0:
		d=0.1;
		break;
	case 1:
		d=0.08;
		break;
	case 2:
	case 3:
	case 4:
		d=0.07;
		break;
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
		d=0.06;
		break;
	default:
		d=0.05;
	}
	a=f*(1.0-d);
	printf("实际支付运费金额为：%.2f\n",a);
	getch();
	return 0;
}
