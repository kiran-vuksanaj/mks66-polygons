#include<stdio.h>
#include<stdlib.h>


int main(){
  int frame;
  for(frame = 0; frame < 100; frame++){
	printf("sphere\n0 0 0 200\n");
	printf("ident\n");
	printf("rotate\ny %lf\nrotate\nx %lf\n",frame*7.2,frame*1.8);
	printf("move\n250 250 0\n");
	printf("apply\n");
	/* printf("display\n"); */
	printf("save\nframes/frame%02d.gif\n",frame);
	printf("clear\n");
  }
  return 0;
}
