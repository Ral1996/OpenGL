//INCLUIMOS CABEZERAS
#include <GL/glut.h>
#include <GL/glu.h>
#include <GL/gl.h>
#include <math.h>
/*
		CATEDRA: ALGORITMOS GRAFICOS
	PROGRAMADOR: RAUL MAURICIO PORTILLO MU�OZ
		 CARNET: PM13004
	 EVALUACION: LABORATORIO - GUIA #2
	 
			"TABLERO DE AJEDREZ"
  
 */

void Tablero(void){

	/*CUADROS EN EL SEGUNDO CUADRANTE*/
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);//CUADROS BLANCOS
    glVertex3f(0.0f,0.0f,0.0f);
    glVertex3f(0.0f,3.0f,0.0f);
    glVertex3f(3.0f,3.0f,0.0f);
    glVertex3f(3.0f,0.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);//CUADROS NEGROS
    glVertex3f(3.0f,0.0f,0.0f);
    glVertex3f(3.0f,3.0f,0.0f);
    glVertex3f(6.0f,3.0f,0.0f);
    glVertex3f(6.0f,0.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);//CUADROS BLANCOS
    glVertex3f(6.0f,0.0f,0.0f);
    glVertex3f(6.0f,3.0f,0.0f);
    glVertex3f(9.0f,3.0f,0.0f);
    glVertex3f(9.0f,0.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);//CUADROS NEGROS
    glVertex3f(9.0f,0.0f,0.0f);
    glVertex3f(9.0f,3.0f,0.0f);
    glVertex3f(12.0f,3.0f,0.0f);
    glVertex3f(12.0f,0.0f,0.0f);
    glEnd();

    /*CUADROS EN EL PRIMER CUADRANTE*/
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);//CUADROS NEGROS
    glVertex3f(0.0f,0.0f,0.0f);
    glVertex3f(0.0f,3.0f,0.0f);
    glVertex3f(-3.0f,3.0f,0.0f);
    glVertex3f(-3.0f,0.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);//CUADROS BLANCOS
    glVertex3f(-3.0f,0.0f,0.0f);
    glVertex3f(-3.0f,3.0f,0.0f);
    glVertex3f(-6.0f,3.0f,0.0f);
    glVertex3f(-6.0f,0.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);//CUADROS NEGROS
    glVertex3f(-6.0f,0.0f,0.0f);
    glVertex3f(-6.0f,3.0f,0.0f);
    glVertex3f(-9.0f,3.0f,0.0f);
    glVertex3f(-9.0f,0.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);//CUADROS BLANCOS
    glVertex3f(-9.0f,0.0f,0.0f);
    glVertex3f(-9.0f,3.0f,0.0f);
    glVertex3f(-12.0f,3.0f,0.0f);
    glVertex3f(-12.0f,0.0f,0.0f);
    glEnd();

    /*CUADROS EN EL SEGUNDO CUADRANTE*/
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);//CUADROS NEGROS
    glVertex3f(0.0f,3.0f,0.0f);
    glVertex3f(3.0f,3.0f,0.0f);
    glVertex3f(3.0f,6.0f,0.0f);
    glVertex3f(0.0f,6.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);//CUADROS BLANCOS
    glVertex3f(3.0f,3.0f,0.0f);
    glVertex3f(6.0f,3.0f,0.0f);
    glVertex3f(6.0f,6.0f,0.0f);
    glVertex3f(3.0f,6.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);//CUADROS NEGROS
    glVertex3f(6.0f,3.0f,0.0f);
    glVertex3f(9.0f,3.0f,0.0f);
    glVertex3f(9.0f,6.0f,0.0f);
    glVertex3f(6.0f,6.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);//CUADROS BLANCOS
    glVertex3f(9.0f,3.0f,0.0f);
    glVertex3f(12.0f,3.0f,0.0f);
    glVertex3f(12.0f,6.0f,0.0f);
    glVertex3f(9.0f,6.0f,0.0f);
    glEnd();

    /*CUADROS EN EL PRIMER CUADRANTE*/
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);//CUADROS BLANCOS
    glVertex3f(0.0f,6.0f,0.0f);
    glVertex3f(3.0f,6.0f,0.0f);
    glVertex3f(3.0f,9.0f,0.0f);
    glVertex3f(0.0f,9.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0,1.0);//CUADROS NEGROS
    glVertex3f(3.0f,6.0f,0.0f);
    glVertex3f(6.0f,6.0f,0.0f);
    glVertex3f(6.0f,9.0f,0.0f);
    glVertex3f(3.0f,9.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);//CUADROS BLANCOS
    glVertex3f(6.0f,6.0f,0.0f);
    glVertex3f(9.0f,6.0f,0.0f);
    glVertex3f(9.0f,9.0f,0.0f);
    glVertex3f(6.0f,9.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);//CUADROS NEGROS
    glVertex3f(9.0f,6.0f,0.0f);
    glVertex3f(12.0f,6.0f,0.0f);
    glVertex3f(12.0f,9.0f,0.0f);
    glVertex3f(9.0f,9.0f,0.0f);
    glEnd();


    /* CUADROS PRIMER CUADRANTE*/
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);//CUADROS BLANCOS
    glVertex3f(0.0f,6.0f,0.0f);
    glVertex3f(3.0f,6.0f,0.0f);
    glVertex3f(3.0f,9.0f,0.0f);
    glVertex3f(0.0f,9.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0,0.0);//CUADROS NEGROS
    glVertex3f(3.0f,6.0f,0.0f);
    glVertex3f(6.0f,6.0f,0.0f);
    glVertex3f(6.0f,9.0f,0.0f);
    glVertex3f(3.0f,9.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);//CUADROS BLANCOS
    glVertex3f(6.0f,6.0f,0.0f);
    glVertex3f(9.0f,6.0f,0.0f);
    glVertex3f(9.0f,9.0f,0.0f);
    glVertex3f(6.0f,9.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);//CUADROS NEGROS
    glVertex3f(9.0f,6.0f,0.0f);
    glVertex3f(12.0f,6.0f,0.0f);
    glVertex3f(12.0f,9.0f,0.0f);
    glVertex3f(9.0f,9.0f,0.0f);
    glEnd();

	/* CUADROS SEGUNDO CUADRANTE*/
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);//CUADROS BLANCOS
    glVertex3f(-0.0f,3.0f,0.0f);
    glVertex3f(-3.0f,3.0f,0.0f);
    glVertex3f(-3.0f,6.0f,0.0f);
    glVertex3f(-0.0f,6.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);//CUADROS NEGROS
    glVertex3f(-3.0f,3.0f,0.0f);
    glVertex3f(-6.0f,3.0f,0.0f);
    glVertex3f(-6.0f,6.0f,0.0f);
    glVertex3f(-3.0f,6.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);//CUADROS BLANCOS
    glVertex3f(-6.0f,3.0f,0.0f);
    glVertex3f(-9.0f,3.0f,0.0f);
    glVertex3f(-9.0f,6.0f,0.0f);
    glVertex3f(-6.0f,6.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);//CUADROS NEGROS
    glVertex3f(-9.0f,3.0f,0.0f);
    glVertex3f(-12.0f,3.0f,0.0f);
    glVertex3f(-12.0f,6.0f,0.0f);
    glVertex3f(-9.0f,6.0f,0.0f);
    glEnd();


    /* CUADROS PRIMER CUADRANTE*/
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);//CUADROS BLANCOS
    glVertex3f(0.0f,6.0f,0.0f);
    glVertex3f(3.0f,6.0f,0.0f);
    glVertex3f(3.0f,9.0f,0.0f);
    glVertex3f(0.0f,9.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0,0.0);//CUADROS NEGROS
    glVertex3f(3.0f,6.0f,0.0f);
    glVertex3f(6.0f,6.0f,0.0f);
    glVertex3f(6.0f,9.0f,0.0f);
    glVertex3f(3.0f,9.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);//CUADROS BLANCOS
    glVertex3f(6.0f,6.0f,0.0f);
    glVertex3f(9.0f,6.0f,0.0f);
    glVertex3f(9.0f,9.0f,0.0f);
    glVertex3f(6.0f,9.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);//CUADROS NEGROS
    glVertex3f(9.0f,6.0f,0.0f);
    glVertex3f(12.0f,6.0f,0.0f);
    glVertex3f(12.0f,9.0f,0.0f);
    glVertex3f(9.0f,9.0f,0.0f);
    glEnd();
    

    /* CUADROS SEGUNDO CUADRANTE */
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);//CUADROS NEGROS
    glVertex3f(0.0f,6.0f,0.0f);
    glVertex3f(-3.0f,6.0f,0.0f);
    glVertex3f(-3.0f,9.0f,0.0f);
    glVertex3f(0.0f,9.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0,1.0);//CUADROS BLANCOS
    glVertex3f(-3.0f,6.0f,0.0f);
    glVertex3f(-6.0f,6.0f,0.0f);
    glVertex3f(-6.0f,9.0f,0.0f);
    glVertex3f(-3.0f,9.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);//CUADROS NEGROS
    glVertex3f(-6.0f,6.0f,0.0f);
    glVertex3f(-9.0f,6.0f,0.0f);
    glVertex3f(-9.0f,9.0f,0.0f);
    glVertex3f(-6.0f,9.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);//CUADROS BLANCOS
    glVertex3f(-9.0f,6.0f,0.0f);
    glVertex3f(-12.0f,6.0f,0.0f);
    glVertex3f(-12.0f,9.0f,0.0f);
    glVertex3f(-9.0f,9.0f,0.0f);
    glEnd();


    /* CUADROS CUARTO CUADRANTE */
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);//CUADROS BLANCOS
    glVertex3f(0.0f,0.0f,0.0f);
    glVertex3f(0.0f,-3.0f,0.0f);
    glVertex3f(-3.0f,-3.0f,0.0f);
    glVertex3f(-3.0f,0.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);//CUADROS NEGROS
    glVertex3f(-3.0f,0.0f,0.0f);
    glVertex3f(-3.0f,-3.0f,0.0f);
    glVertex3f(-6.0f,-3.0f,0.0f);
    glVertex3f(-6.0f,0.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);//CUADROS BLANCOS
    glVertex3f(-6.0f,0.0f,0.0f);
    glVertex3f(-6.0f,-3.0f,0.0f);
    glVertex3f(-9.0f,-3.0f,0.0f);
    glVertex3f(-9.0f,0.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);//CUADROS NEGROS
    glVertex3f(-9.0f,0.0f,0.0f);
    glVertex3f(-9.0f,-3.0f,0.0f);
    glVertex3f(-12.0f,-3.0f,0.0f);
    glVertex3f(-12.0f,0.0f,0.0f);
    glEnd();

	/* CUADROS CUARTO CUADRANTE */
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);//CUADROS NEGROS
    glVertex3f(-0.0f,-3.0f,0.0f);
    glVertex3f(-3.0f,-3.0f,0.0f);
    glVertex3f(-3.0f,-6.0f,0.0f);
    glVertex3f(-0.0f,-6.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0,1.0);//CUADROS BLANCOS
    glVertex3f(-3.0f,-3.0f,0.0f);
    glVertex3f(-6.0f,-3.0f,0.0f);
    glVertex3f(-6.0f,-6.0f,0.0f);
    glVertex3f(-3.0f,-6.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);//CUADROS NEGROS
    glVertex3f(-6.0f,-3.0f,0.0f);
    glVertex3f(-9.0f,-3.0f,0.0f);
    glVertex3f(-9.0f,-6.0f,0.0f);
    glVertex3f(-6.0f,-6.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);//CUADROS BLANCOS
    glVertex3f(-9.0f,-3.0f,0.0f);
    glVertex3f(-12.0f,-3.0f,0.0f);
    glVertex3f(-12.0f,-6.0f,0.0f);
    glVertex3f(-9.0f,-6.0f,0.0f);
    glEnd();

    /* CUADROS TERCER CUADRANTE */
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);//CUADROS NEGROS
    glVertex3f(0.0f,0.0f,0.0f);
    glVertex3f(0.0f,-3.0f,0.0f);
    glVertex3f(3.0f,-3.0f,0.0f);
    glVertex3f(3.0f,0.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);//CUADROS BLANCOS
    glVertex3f(3.0f,0.0f,0.0f);
    glVertex3f(3.0f,-3.0f,0.0f);
    glVertex3f(6.0f,-3.0f,0.0f);
    glVertex3f(6.0f,0.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);//CUADROS NEGROS
    glVertex3f(6.0f,0.0f,0.0f);
    glVertex3f(6.0f,-3.0f,0.0f);
    glVertex3f(9.0f,-3.0f,0.0f);
    glVertex3f(9.0f,0.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);//CUADROS BLANCOS
    glVertex3f(9.0f,0.0f,0.0f);
    glVertex3f(9.0f,-3.0f,0.0f);
    glVertex3f(12.0f,-3.0f,0.0f);
    glVertex3f(12.0f,0.0f,0.0f);
    glEnd();

    /*CUADROS TERCER CUADRANTE*/
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);//CUADROS BLANCOS
    glVertex3f(0.0f,-3.0f,0.0f);
    glVertex3f(3.0f,-3.0f,0.0f);
    glVertex3f(3.0f,-6.0f,0.0f);
    glVertex3f(0.0f,-6.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0,0.0);//CUADROS NEGROS
    glVertex3f(3.0f,-3.0f,0.0f);
    glVertex3f(6.0f,-3.0f,0.0f);
    glVertex3f(6.0f,-6.0f,0.0f);
    glVertex3f(3.0f,-6.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);//CUADROS BLANCOS
    glVertex3f(6.0f,-3.0f,0.0f);
    glVertex3f(9.0f,-3.0f,0.0f);
    glVertex3f(9.0f,-6.0f,0.0f);
    glVertex3f(6.0f,-6.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);//CUADROS NEGROS
    glVertex3f(9.0f,-3.0f,0.0f);
    glVertex3f(12.0f,-3.0f,0.0f);
    glVertex3f(12.0f,-6.0f,0.0f);
    glVertex3f(9.0f,-6.0f,0.0f);
    glEnd();


    /* CUADROS CUARTO CUADRANTE*/
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);//CUADROS BLANCOS
    glVertex3f(0.0f,-6.0f,0.0f);
    glVertex3f(-3.0f,-6.0f,0.0f);
    glVertex3f(-3.0f,-9.0f,0.0f);
    glVertex3f(0.0f,-9.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0,0.0);//CUADROS NEGROS
    glVertex3f(-3.0f,-6.0f,0.0f);
    glVertex3f(-6.0f,-6.0f,0.0f);
    glVertex3f(-6.0f,-9.0f,0.0f);
    glVertex3f(-3.0f,-9.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);//CUADROS BLANCOS
    glVertex3f(-6.0f,-6.0f,0.0f);
    glVertex3f(-9.0f,-6.0f,0.0f);
    glVertex3f(-9.0f,-9.0f,0.0f);
    glVertex3f(-6.0f,-9.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);//CUADROS NEGROS
    glVertex3f(-9.0f,-6.0f,0.0f);
    glVertex3f(-12.0f,-6.0f,0.0f);
    glVertex3f(-12.0f,-9.0f,0.0f);
    glVertex3f(-9.0f,-9.0f,0.0f);
    glEnd();


    /* CUADROS CUARTO CUADRANTE */
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);//CUADROS NEGROS
    glVertex3f(0.0f,-6.0f,0.0f);
    glVertex3f(3.0f,-6.0f,0.0f);
    glVertex3f(3.0f,-9.0f,0.0f);
    glVertex3f(0.0f,-9.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0,1.0);//CUADROS BLANCOS
    glVertex3f(3.0f,-6.0f,0.0f);
    glVertex3f(6.0f,-6.0f,0.0f);
    glVertex3f(6.0f,-9.0f,0.0f);
    glVertex3f(3.0f,-9.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);//CUADROS NEGROS
    glVertex3f(6.0f,-6.0f,0.0f);
    glVertex3f(9.0f,-6.0f,0.0f);
    glVertex3f(9.0f,-9.0f,0.0f);
    glVertex3f(6.0f,-9.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);//CUADROS BLANCOS
    glVertex3f(9.0f,-6.0f,0.0f);
    glVertex3f(12.0f,-6.0f,0.0f);
    glVertex3f(12.0f,-9.0f,0.0f);
    glVertex3f(9.0f,-9.0f,0.0f);
    glEnd();


    /* CUADROS TERCER CUADRANTE */
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);//CUADROS BLANCOS
    glVertex3f(0.0f,9.0f,0.0f);
    glVertex3f(-3.0f,9.0f,0.0f);
    glVertex3f(-3.0f,12.0f,0.0f);
    glVertex3f(0.0f,12.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0,0.0);//CUADROS NEGROS
    glVertex3f(-3.0f,9.0f,0.0f);
    glVertex3f(-6.0f,9.0f,0.0f);
    glVertex3f(-6.0f,12.0f,0.0f);
    glVertex3f(-3.0f,12.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);//CUADROS BLANCOS
    glVertex3f(-6.0f,9.0f,0.0f);
    glVertex3f(-9.0f,9.0f,0.0f);
    glVertex3f(-9.0f,12.0f,0.0f);
    glVertex3f(-6.0f,12.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);//CUADROS NEGROS
    glVertex3f(-9.0f,9.0f,0.0f);
    glVertex3f(-12.0f,9.0f,0.0f);
    glVertex3f(-12.0f,12.0f,0.0f);
    glVertex3f(-9.0f,12.0f,0.0f);
    glEnd();


    /* CUADROS TERCER CUADRANTE*/
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);//CUADROS NEGROS
    glVertex3f(0.0f,9.0f,0.0f);
    glVertex3f(3.0f,9.0f,0.0f);
    glVertex3f(3.0f,12.0f,0.0f);
    glVertex3f(0.0f,12.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0,1.0);//CUADROS BLANCOS
    glVertex3f(3.0f,9.0f,0.0f);
    glVertex3f(6.0f,9.0f,0.0f);
    glVertex3f(6.0f,12.0f,0.0f);
    glVertex3f(3.0f,12.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);//CUADROS NEGROS
    glVertex3f(6.0f,9.0f,0.0f);
    glVertex3f(9.0f,9.0f,0.0f);
    glVertex3f(9.0f,12.0f,0.0f);
    glVertex3f(6.0f,12.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);//CUADROS BLANCOS
    glVertex3f(9.0f,9.0f,0.0f);
    glVertex3f(12.0f,9.0f,0.0f);
    glVertex3f(12.0f,12.0f,0.0f);
    glVertex3f(9.0f,12.0f,0.0f);
    glEnd();

    /* CUADROS CUARTO CUADRANTE */
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0,0.0);//CUADROS NEGROS
    glVertex3f(0.0f,-9.0f,0.0f);
    glVertex3f(-3.0f,-9.0f,0.0f);
    glVertex3f(-3.0f,-12.0f,0.0f);
    glVertex3f(0.0f,-12.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0,1.0);//CUADROS BLANCOS
    glVertex3f(-3.0f,-9.0f,0.0f);
    glVertex3f(-6.0f,-9.0f,0.0f);
    glVertex3f(-6.0f,-12.0f,0.0f);
    glVertex3f(-3.0f,-12.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);//CUADROS NEGROS
    glVertex3f(-6.0f,-9.0f,0.0f);
    glVertex3f(-9.0f,-9.0f,0.0f);
    glVertex3f(-9.0f,-12.0f,0.0f);
    glVertex3f(-6.0f,-12.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);//CUADROS BLANCOS
    glVertex3f(-9.0f,-9.0f,0.0f);
    glVertex3f(-12.0f,-9.0f,0.0f);
    glVertex3f(-12.0f,-12.0f,0.0f);
    glVertex3f(-9.0f,-12.0f,0.0f);
    glEnd();


    /* CUADROS CUARTO CUADRANTE */
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);//CUADROS BLANCOS
    glVertex3f(0.0f,-9.0f,0.0f);
    glVertex3f(3.0f,-9.0f,0.0f);
    glVertex3f(3.0f,-12.0f,0.0f);
    glVertex3f(0.0f,-12.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0,0.0);//CUADROS NEGROS
    glVertex3f(3.0f,-9.0f,0.0f);
    glVertex3f(6.0f,-9.0f,0.0f);
    glVertex3f(6.0f,-12.0f,0.0f);
    glVertex3f(3.0f,-12.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);//CUADROS BLANCOS
    glVertex3f(6.0f,-9.0f,0.0f);
    glVertex3f(9.0f,-9.0f,0.0f);
    glVertex3f(9.0f,-12.0f,0.0f);
    glVertex3f(6.0f,-12.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);//CUADROS NEGROS
    glVertex3f(9.0f,-9.0f,0.0f);
    glVertex3f(12.0f,-9.0f,0.0f);
    glVertex3f(12.0f,-12.0f,0.0f);
    glVertex3f(9.0f,-12.0f,0.0f);
    glEnd();


}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();// AQUI RESETEAMOS LAS TRANSFORMACIONES 
	glScalef(15.0,15.0,15.0);
	glFlush();
	glTranslatef(0.0,-0.05,0.0);
	glScalef(0.072,0.062,0.09);
	Tablero();//PASAMOS LA FUNCION EN LA CUAL SE DIBUJA EL TABLERO DE AJEDREZ
	glFlush();
}

void init(void)
{
	/* AQUI SELECCIONAMOS EL COLOR DE BORRADO */
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glShadeModel(GL_FLAT);
}

void reshape(int w, int h)
{
    glClearColor(0,0,0.2,0.1);
	glViewport(0,0,(GLsizei)w,(GLsizei)h);                      //CONFIGURAMOS EL Viewport, PARA CONTROLAR LAS DIMENSIONES DE LA PANTALLA
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();							    			// AQUI RESETEAMOS LAS TRANSFORMACIONES 
	gluPerspective(80.0f, (GLfloat)w/(GLfloat)h, 0.0f, 1.0f);   // DEFINIMOS UNA PROYECCI�N DE PERSPECTIVA 
	// APLICANDO gluLookAt PARA UNA VISTA DE PLANTA SOBRE EL TABLERO DE AJEDREZ
	gluLookAt(0.0,-24.0,-10.0    //punto de vista en el eje X,Y,Z
			  ,0.0,3.0,-1.0      //Centro del Objeto en el eje X,Y,Z
			  ,0.0,1.0,0.0);     //Orientaci�n de la c�mara (vector UP el eje X,Y,Z)

	glMatrixMode(GL_MODELVIEW);  /* seleccionamos la matriz modelo/vista */
	glLoadIdentity();            // AQUI RESETEAMOS LAS TRANSFORMACIONES 
}

int main(int argc, char** argv)
{
	// INICIALIZA LA LIBRERIA AUXILIAR GLUT
    glutInit(&argc, argv);
    // INICIALIZA EL MODO DE VISUALIZACI�N
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    // INDICAMOS EL TAMA�O DE LA VENTANA, (ancho,alto)
    glutInitWindowSize (800, 600);
    // INDICAMOS LA POCICI�N INICIAL, (xmin,ymin)
    glutInitWindowPosition (300, 100);
    glutCreateWindow ("Tablero de Ajedrez - PM13004");  // ABRE LA VENTANA CON EL TITULO INDICADO
    init ();										    // INICIALIZA LOS VALORES
    glutDisplayFunc(display);	        				// INDICA CUAL ES LA FUNCI�N DE DIBUJO 
    glutReshapeFunc(reshape);		                    // INDICA LA FUNCION DE PERSPECTIVAS
    glutMainLoop();
    return 0;
}
