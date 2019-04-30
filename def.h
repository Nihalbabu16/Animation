void Win ::  Disk(double radius) {
	int d;
	glBegin(GL_POLYGON);
	for (d = 0; d < 32; d++) {
		double angle = 2*PI/32 * d;
		glVertex2d( radius*cos(angle), radius*sin(angle));
	}
	glEnd();
}


void Win ::  Wheel() {
    int i;
	glColor3f(0,0,0);
	w.Disk(1);
	glColor3f(0.75f, 0.75f, 0.75f);
	w.Disk(0.8);
	glColor3f(0,0,0);
	w.Disk(0.2);
	glRotatef(frame*20,0,0,1);
	glBegin(GL_LINES);
	for (i = 0; i < 15; i++) {
		glVertex2f(0,0);
		glVertex2d(cos(i*2*PI/15), sin(i*2*PI/15));
	}
	glEnd();
}

void Win ::  Cir(){
	glColor3f(0.8f,0.8f,0.8f);
	w.Disk(0.25);
}

void Win ::  Car(int df)
{
	glPushMatrix();
	glTranslatef(-1.5f, -0.1f, 0);
	glScalef(0.8f,0.8f,1);
	w.Wheel();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(1.5f, -0.1f, 0);
	glScalef(0.8f,0.8f,1);
	w.Wheel();
	glPopMatrix();

	if(df == 1)
	glColor3f(0.1,0.0,0.3);
	else glColor3f(1,1,0);
	glBegin(GL_POLYGON);
	glVertex2f(-4.5f,0);	
	glVertex2f(4.5f,0);
	glVertex2f(4.5f,1.5);
	glVertex2f(2.5f,2);
	glVertex2f(1.4f,3.5);
	glVertex2f(-2.2f,3.5);
	glVertex2f(-1.8f,2);
	glVertex2f(-4.5f,1.3);
	glEnd();

	glColor3f(0.3f, 0.5f, 1);
	glBegin(GL_POLYGON);
	glVertex2f(1.2f,3.25);
	glVertex2f(-0.2f,3.25);
	glVertex2f(-0.2,2.25);
	glVertex2f(1.2f,2.25);
	glEnd();
	
	glColor3f(0.3f, 0.5f, 1);
	glBegin(GL_POLYGON);
	glVertex2f(-2.2f,3.25);
	glVertex2f(-0.8f,3.25);
	glVertex2f(-0.8,2.25);
	glVertex2f(-2.2f,2.25);	
	glEnd();

}

void Win ::  arc(double radius) {
	int d;
	glBegin(GL_LINES);

	for (d =0; d < 10; d++){
		double angle = 2*PI/50 * d;
		glVertex2d( radius*cos(angle), radius*sin(angle));
	}
	
	for (d =10; d >=0; d--) {
		double angle = 2*PI/50 * d;
		glVertex2d( radius*cos(angle), radius*sin(angle));
	}
	glEnd();
}

void Win ::  arc1() {
	int i;
	glColor3f(0,0,0);
	w.arc(0.5);
}

void Win ::  Sun(int a) {
	if(a < 2){
		ran += 0.0004*9.4;
		glColor3f(1,(0.1+ran),0);
		if(ran<0.6)
		glClearColor((0+ran),(0+ran), 1,0);
		w.Disk(0.25);
	}
	else {
		ran += 0.0004*9.4;
		if(ran < 1)
		glColor3f(1,(0.1+ran),0);
		else{
			glColor3f(1,1,0);
		}
		if(ran<0.6)
		glClearColor((0+ran),(0+ran), 1,0);
		w.Disk(0.25);
	}
}

//Function to draw Windmill
void Win ::  Windmill() 
{
	int i;
	glColor3f(0.1f, 0.1f, 0.0f);
	
	glBegin(GL_POLYGON);
	glVertex2f(-0.05f, 0);
	glVertex2f(0.05f, 0);
	glVertex2f(0.05f, 3);
	glVertex2f(-0.05f, 3);
	glEnd();
	
	glTranslatef(0, 3, 0);
	glRotated(frame * (180.0/46), 0, 0, 1);
	
	glColor3f(1, 0.5f, 0.0f);
	for (i = 0; i < 4; i++) {
		glRotated(90, 0, 0, 1);
		glBegin(GL_POLYGON);
		glVertex2f(0,0);
		glVertex2f(0.75f, 0.1f);
		glVertex2f(1.75f,0);
		glVertex2f(0.75f, -0.1f);
		glEnd();
	}
	
	glPushMatrix();
	w.Cir();
	glPopMatrix();
}

void Win ::  moon(int a)
{
	if(a == 1){
	glColor3f(0.8,0.8,0.2);
	Disk(0.25);
	}
	else 
	{
		glColor3f(0,0,0);
		Disk(0.25);
	}
	
}

void Win ::  Cloud()
{
	glColor3f(1,1,1);
	w.Disk(0.2);
}
void Win ::  Cloud1()
{
	glColor3f(1,1,1);
	w.Disk(0.25);
}
void Win ::  Cloud2()
{
	glColor3f(1,1,1);
	w.Disk(0.25);
}
void Win ::  Cloud3()
{
	glColor3f(1,1,1);	
	w.Disk(0.3);
}
void Win ::  Cloud4()
{	
	glColor3f(1,1,1);
	w.Disk(0.2);
}

