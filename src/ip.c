/*
 ============================================================================
 Name        : IP Finder
 Author      : Anthony Segura
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : A program allowing you to find your IP
 ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
	//Opens CMD to find a users IP
	system("C:\\Windows\\System32\\ipconfig");
	getch();
	return 0;
}
