#include"header.h"
#include"def.h"
#include"defi.h"

int main(int argc, char** argv) {
    glutInit(&argc, argv); 
    glutInitDisplayMode(GLUT_DOUBLE);
    glutInitWindowSize(700,500);
    glutInitWindowPosition(100,100);  
    glutCreateWindow("WindMill"); 

    init();

    glutDisplayFunc(display);   
    glutTimerFunc(200,doFrame,0); 
	glutKeyboardFunc(processSpecialKeys);
    glutMainLoop(); 
    return 0;
}    

