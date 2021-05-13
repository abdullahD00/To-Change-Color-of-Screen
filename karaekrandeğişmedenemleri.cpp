#include<graphics.h>
#include<conio.h>


int main(){
	int gd=DETECT, gm;
	initgraph(&gd,&gm"C:\\TC\\BGI");
	setcolor(BLUE);
	rectangle(50,50,100,100);
	getch();
	closegraph();
	printf("merhaba dunya...\n");

return 0;
}
