//INCLUIMOS CABEZERAS
#include <GL/glut.h>
#include <GL/glu.h>
#include <GL/gl.h>
#include <math.h>

/*
		CATEDRA: ALGORITMOS GRAFICOS
	PROGRAMADOR: RAUL MAURICIO PORTILLO MUÑOZ
		 CARNET: PM13004
	 EVALUACION: LABORATORIO - GUIA #2
	 
	   "TABLERO DE AJEDREZ CON PAREDES"
  
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

void Paredes_Tablero(void)
{
	//CUADRO DE FONDO
	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3d(0.766,0.8,-1);
	glVertex3d(0.817,0.6,0.03);
	glVertex3d(-0.817,0.6,0.03);
	glVertex3d(-0.766,0.8,-1);
	glEnd();
	//CUADRO DERECHO
	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3d(0.93,-0.295,-1);
	glVertex3d(0.82,-0.78,0.02);
	glVertex3d(0.82,0.61,0.03);
	glVertex3d(0.799,0.9,-1.02);
	glEnd();
	//CUADRO IZQUIERDO
	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3d(-0.93,-0.295,-1);
	glVertex3d(-0.82,-0.78,0.02);
	glVertex3d(-0.82,0.61,0.03);
	glVertex3d(-0.799,0.9,-1.02);
	glEnd();

}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	glScalef(15.0,15.0,15.0);
	Paredes_Tablero();//PASAMOS LA FUNCION EN LA CUAL SE DIBUJAN LAS PAREDES DEL TABLERO DE AJEDREZ
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
	gluPerspective(80.0f, (GLfloat)w/(GLfloat)h, 0.0f, 1.0f);   // DEFINIMOS UNA PROYECCIÓN DE PERSPECTIVA 
	// APLICANDO gluLookAt PARA UNA VISTA DE PLANTA SOBRE EL TABLERO DE AJEDREZ
	gluLookAt(0.0,-24.0,-10.0    //punto de vista en el eje X,Y,Z
			  ,0.0,3.0,-1.0      //Centro del Objeto en el eje X,Y,Z
			  ,0.0,1.0,0.0);     //Orientación de la cámara (vector UP el eje X,Y,Z)

	glMatrixMode(GL_MODELVIEW);  /* seleccionamos la matriz modelo/vista */
	glLoadIdentity();   
}

int main(int argc, char** argv)
{
	// INICIALIZA LA LIBRERIA AUXILIAR GLUT
    glutInit(&argc, argv);
    // INICIALIZA EL MODO DE VISUALIZACIÓN
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    // INDICAMOS EL TAMAÑO DE LA VENTANA, (ancho,alto)
    glutInitWindowSize (800, 700);
    // INDICAMOS LA POCICIÓN INICIAL, (xmin,ymin)
    glutInitWindowPosition (300, 100);
    glutCreateWindow ("Tablero de Ajedrez con Paredes - PM13004");  // ABRE LA VENTANA CON EL TITULO INDICADO
    init ();										    // INICIALIZA LOS VALORES
    glutDisplayFunc(display);	        				// INDICA CUAL ES LA FUNCIÓN DE DIBUJO 
    glutReshapeFunc(reshape);		                    // INDICA LA FUNCION DE PERSPECTIVAS
    glutMainLoop();
    return 0;
}
