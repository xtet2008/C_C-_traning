/********************
���ܣ����������С��Ϸ
********************/
#include <windows.h> //��Cдwindows���򣬱������ͷ�ļ�
#include <stdio.h>
int main()
{
 HWND pdesk=GetDesktopWindow(); //�������������Ϊָ�������ָ��
 int i;
 
 for(i=0; i<50; i++) //�����������
 {
  ScrollWindow(pdesk, 1, 3, NULL, NULL);//1�������ҹ���һ����λ��0����߶ȣ���ʾ����
 }
 for(; i>0; i--)     //���ҹ�������
 {
  ScrollWindow(pdesk, -1, -3, NULL, NULL);//-1�����������һ����λ
 }
 return 0;
}
 