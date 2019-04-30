void doFrame(int v) {
    frame++;
    glutPostRedisplay();
    glutTimerFunc(30,doFrame,0);
}

void init() {
	glClearColor(0, 0, 1,0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, 7, -1, 4, -1, 1);
	glMatrixMode(GL_MODELVIEW);
}


void  display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	//sun
	if((6*(frame % 300) / 300.0)< 3.6){
	glPushMatrix();
	glTranslated(5.0,6*(frame % 300) / 300.0, 0);
	w.Sun(1);
	glPopMatrix();
	}
	else 
	{
	glPushMatrix();
	glTranslated(5.0,3.6, 0);
	w.Sun(3);
	glPopMatrix();
	}
	//sun
	
	//tree
	glColor3f(0, 0.6f, 0.2f);
	glBegin(GL_POLYGON);
	glVertex2f(-6,-1);
	glVertex2f(1.5f,2.1f);
	glVertex2f(5,-1);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(-3,-1);
	glVertex2f(3,2.1f);
	glVertex2f(10,-1);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(0,-1);
	glVertex2f(6,2.1f);
	glVertex2f(10,-1);
	glEnd();
	//tree
	//soil
	glColor3f(1,0.5,0);
	glBegin(GL_POLYGON);
	glVertex2f(-20,-1);
	glVertex2f(6,0);
	glVertex2f(20,-1);
	glEnd();
	//soil
	
	//Cloud
	
	if(frame%300 > 40){
		for(float i=0;i<2 ; i=i+1.5){
		glPushMatrix();
		glTranslated(i+0.5,3.6,1);
		w.Cloud();
		glPopMatrix();
		
		
		glPushMatrix();
		glTranslated(i+0.7,3.7,1);
		w.Cloud1();
		glPopMatrix();

		glPushMatrix();
		glTranslated(i+0.7,3.5,1);
		w.Cloud2();
		glPopMatrix();

		glPushMatrix();
		glTranslated(i+0.9,3.6,1);
		w.Cloud3();
		glPopMatrix();
		
		
		glPushMatrix();
		glTranslated(i+1.1,3.6,1);
		w.Cloud4();
		glPopMatrix();
		glPopMatrix();
		}
	}
	//Cloud
	
	//Windmill
	glPushMatrix();
	glTranslated(0.75,1,0);
	glScaled(0.6,0.6,1);
	w.Windmill();
	glPopMatrix();
	//Windmill
	
	//Windmill2
	glPushMatrix();
	glTranslated(2.2,0.9,0);
	glScaled(0.4,0.4,1);
	w.Windmill();
	glPopMatrix();
	//Windmill2
	
	//Windmill3
	glPushMatrix();
	glTranslated(3.7,0.8,0);
	glScaled(0.7,0.7,1);
	w.Windmill();
	glPopMatrix();
	//Windmill3
	
	//Windmill4
	glPushMatrix();
	glTranslated(4.8,0.6,0);
	glScaled(0.4,0.4,1);
	w.Windmill();
	glPopMatrix();
	//Windmill4
	
	//Windmill5
	glPushMatrix();
	glTranslated(6.2,1,0);
	glScaled(0.6,0.6,1);
	w.Windmill();
	glPopMatrix();
	//Windmill5	
	
	//road
	glColor3f(0.4f, 0.4f, 0.5f);
	glBegin(GL_POLYGON);
	glVertex2f(0,-0.4f);
	glVertex2f(7,-0.4f);
	glVertex2f(7,0.4f);
	glVertex2f(0,0.4f);
	glEnd();

	glLineWidth(6);  
	glColor3f(1,1,1);
	glBegin(GL_LINES);
	glVertex2f(0,0);
	glVertex2f(1.5,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(2.5,0);
	glVertex2f(4.0,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(5.0,0);
	glVertex2f(6.5,0);
	glEnd();
	glLineWidth(1);
	//road
	
	//car
	glPushMatrix();
	glTranslated(-3 + 13*(frame % 300) / 300.0, -0.2, 0);
	glScaled(0.23,0.23,1);
	w.Car(1);
	glPopMatrix();
	if(13*(frame % 300) / 300.0 == 0)
	{
		ran = 0;
	}
	
	glPushMatrix();
	glTranslated(-5 + 13*(frame % 300) / 300.0, 0.27, 0);
	glScaled(0.2,0.2,1);
	w.Car(2);
	glPopMatrix();
	if(13*(frame % 300) / 300.0 == 0)
	{
		ran = 0;
	}
	
	//car
	
//birds
	if(nb % 5 != 0){
		glLoadIdentity();
		glPushMatrix();
		glTranslated(-2 +13*(frame % 300) / 300.0,(2.999999+h),0);
		glRotatef(30,(20+(10*nb)),(10+(5*nb)),1);
		glLineWidth(10);
		w.arc1();
		glPopMatrix();
		
		glLoadIdentity();
		glPushMatrix();
		glTranslated(-2 + 0.889+13*(frame % 300) / 300.03,(2.99999999999999+h),0);
		glRotatef( 150, 1,230, 1 );
		glColor3f(0,0,0);
		w.arc1();
		glPopMatrix();
		
		glLoadIdentity();
		glPushMatrix();
		glTranslated(-2 + 13*(frame % 300) / 300.0,(1.9999999+h),0);
		glRotatef(30,(20+(10*nb)),(10+(5*nb)),1);
		glLineWidth(10);
		w.arc1();
		glPopMatrix();
		
		glLoadIdentity();
		glPushMatrix();
		glTranslated(-2 + 0.889+13*(frame % 300) / 300.03,(1.99999999999999+h),0);
		glRotatef( 150, 0,140, 1 );
		glColor3f(0,0,0);
		w.arc1();
		glPopMatrix();
		h +=0.01;
		nb++;
	}		
	else 
	{
		glLoadIdentity();
		glPushMatrix();
		glTranslated(-2 + 13*(frame % 300) / 300.0,(3.0+h),0);
		glRotatef( 30, 60,230, 1);
		glLineWidth(10);
		w.arc1();
		glPopMatrix();
		//
		glLoadIdentity();
		glPushMatrix();
		glTranslated(-2 + 0.889+13*(frame % 300) / 300.03,(3.0+h),0);
		glRotatef( 150, 0,5, 1 );
		glColor3f(0,0,0);
		w.arc1();
		glPopMatrix();
		
		glLoadIdentity();
		glPushMatrix();
		glTranslated(-2 + 13*(frame % 300) / 300.0,(2.0+h),0);
		glRotatef( 30, 60,230, 1);
		glLineWidth(10);
		w.arc1();
		glPopMatrix();
		//
		glLoadIdentity();
		glPushMatrix();
		glTranslated(-2 + 0.889+13*(frame % 300) / 300.03,(2.0+h),0);
		glRotatef( 150, 1,30, 1 );
		glColor3f(0,0,0);
		w.arc1();
		glPopMatrix();
		
		h +=0.01;
		nb++;
	}
	if(h > 3.0)
	{
		h = 0;
	}
	//birds
	
	//night
	if(frame%300 < 40)
	{
		glClearColor(0, 0, 0,0);	
		
		//stars
		for(float i=-3;i<10;i = i+0.5)
		{
			for(float j = 2;j<4;j =j + 0.1)
			{
				glPushMatrix();
				glTranslated(i+j,j,0);
				glColor3f(0.8,0.8,0.2);
				w.Disk(0.01);
				glPopMatrix();
				
				glPushMatrix();
				glTranslated(i,j+i,0);
				glColor3f(0.8,0.8,0.2);
				w.Disk(0.01);
				glPopMatrix();	
				
				glPushMatrix();
				glTranslated(i-j,j,0);
				glColor3f(0.8,0.8,0.2);
				w.Disk(0.01);
				glPopMatrix();
				
				glPushMatrix();
				glTranslated(i+j,j,0);
				glColor3f(0.8,0.8,0.2);
				w.Disk(0.01);
				glPopMatrix();
			}
	//moon
	glPushMatrix();
	glTranslated(5.0,3.6, 0);
	w.moon(1);
	glPopMatrix();
	
	glPushMatrix();
	glTranslated(5.20,3.6, 0);
	w.moon(2);
	glPopMatrix();
	//moon
			
			
		}	
		//stars
	}
	//night
	
	glutSwapBuffers();
}

void processSpecialKeys(unsigned char key, int x, int y) 
{
    if(key== 27)
        exit(0);
}

