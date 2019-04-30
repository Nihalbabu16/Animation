#include <GL/gl.h>
#include <GL/glut.h>
#include<bits/stdc++.h>

const static  double PI = 3.141592654;

static int frame = 0;

static float ran=0;

static int nb = 0;
static float h=0.0;

class Win
{
	public :
		void Disk(double );
		void Wheel();
		void Cir();
		void Car(int);
		void Sun(int );
		void moon(int );
		void Windmill();
		void arc(double);
		void arc1();
		void Cloud();
		void Cloud1();
		void Cloud2();
		void Cloud3();
		void Cloud4();
		
}w;

void doframe();

void init();

void display();

void processSpecialKeys(unsigned char key, int x, int y);

