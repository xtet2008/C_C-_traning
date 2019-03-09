#include<stdio.h>
#include<string.h>
#include<stdlib.h>
move(int n,int x,int y,int z)
{

	if(n==1)
		printf("%c-->%c\n",x,z);
	else
	{
		move(n-1,x,z,y);
		printf("%c-->%c\n",x,z);
		move(n-1,y,x,z);
	}
}

main()
{
	int h;
	printf("\n input a number:\n");
	scanf("%d",&h);
	printf("the step to moving %2d diskes:\n",h);
	move(h,'a','b','c');

	getch();
}

/*
从程序中可以看出,move函数是一个递归函数，它有四个形参n,x,y,z。n表示圆盘数，x,y,z分别表示三根针。move 函数的功能是把x上的n个圆盘移动到z上。当n==1时，直接把x上的圆盘移至z上，输出x→z。如n!=1则分为三步：递归调用move函数，把n-1个圆盘从x移到y；输出x→z；递归调用move函数，把n-1个圆盘从y移到z。在递归调用过程中n=n-1，故n的值逐次递减，最后n=1时，终止递归，逐层返回。当n=4 时程序运行的结果为：

    input number:

    4

    the step to moving 4 diskes:

    a→b

    a→c

    b→c

    a→b

    c→a

    c→b

    a→b

    a→c

    b→c

    b→a

    c→a

    b→c

    a→b

    a→c

b→c
*/