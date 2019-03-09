/********************
功能：滚动桌面的小游戏
********************/
#include <windows.h> //用C写windows程序，必须包含头文件
#include <stdio.h>
int main()
{
 HWND pdesk=GetDesktopWindow(); //桌面句柄，可理解为指向桌面的指针
 int i;
 
 for(i=0; i<50; i++) //向左滚出桌面
 {
  ScrollWindow(pdesk, 1, 3, NULL, NULL);//1代表向右滚动一个单位，0代表高度，表示不变
 }
 for(; i>0; i--)     //向右滚回桌面
 {
  ScrollWindow(pdesk, -1, -3, NULL, NULL);//-1代表向左滚动一个单位
 }
 return 0;
}
 