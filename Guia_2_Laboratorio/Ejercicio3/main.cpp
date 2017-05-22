//INCLUIMOS CABEZERAS
#include <GL/glut.h>
#include <GL/glu.h>
#include <stdlib.h>
#include <GL/gl.h>
#include <math.h>

/*
		CATEDRA: ALGORITMOS GRAFICOS
	PROGRAMADOR: RAUL MAURICIO PORTILLO MUÑOZ
		 CARNET: PM13004
	 EVALUACION: LABORATORIO - GUIA #2
	 
	     "MESA + TETERA + PAREDES"
  
 */
 
void init(void)
{
	GLfloat light_position[] = { -1.0, 1.0, 1.0, 0.0 };
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0); //Activamos las luces en 0
    glDepthFunc(GL_LESS); //comparación de profundidad
    glEnable(GL_DEPTH_TEST); //activa GL_DEPTH_TEST
    glLightfv(GL_LIGHT0,GL_POSITION,light_position);
    glShadeModel(GL_SMOOTH);
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

}
//FUNCION PARA PASAR LOS MATERIALES A LA FIGURA
void Materiales(float a, float b, float c, float d, float e, float f, float g, float h, float i, float p, float s)
{
	// PROPIEDADES DE LOS MATERIALES GLOBALES
	GLfloat mat_ambient[] = { a, b, c, p };
	GLfloat mat_diffuse[] = { d, e, f, p };
	GLfloat mat_specular[] = { g, h, i, p };
	GLfloat shine[] = {s};
     //setMaterial
    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, shine);
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
 
    glLoadIdentity();

    
    glRotatef( -21, 1.0, 0.0, 0.0 );
    glRotatef( 38, 0.0, 1.0, 0.0 );
    
    
    // PARED LADO DERECHO
    glBegin(GL_POLYGON);
    Materiales(0.0, 0.0, 0.0,0.01, 0.01, 0.01,0.50, 0.50, 0.50, 0.25f ,1.0f); //PASAMOS EL MATERIAL
    glVertex3f( 0.3, -0.3, 0.3 );
    glVertex3f( 0.3,  0.5, 0.3 );
    glVertex3f(-0.3,  0.5, 0.3 );
    glVertex3f(-0.3, -0.3, 0.3 );
    glEnd();
 
    // PARED LADO IZQUIERDA
    glBegin(GL_POLYGON);
    Materiales(0.0, 0.0, 0.0,0.01, 0.01, 0.01,0.50, 0.50, 0.50, 0.25f ,1.0f); //PASAMOS EL MATERIAL
    glVertex3f(-0.3, -0.3,  0.3 );
    glVertex3f(-0.3,  0.5,  0.3 );
    glVertex3f(-0.3,  0.5, -0.3 );
    glVertex3f(-0.3, -0.3, -0.3 );
    glEnd();
 
    // BASE LADO BLANCO
    glBegin(GL_POLYGON);
	Materiales(0.05, 0.0, 0.0,0.5, 0.4, 0.4, 0.7, 0.04, 0.04, 0.078125,1.0f); //PASAMOS EL MATERIAL
    glVertex3f(0.3, -0.3, -0.3 );
    glVertex3f(0.3, -0.3,  0.3 );
    glVertex3f(-0.3, -0.3,  0.3 );
    glVertex3f(-0.3, -0.3, -0.3 );
    glEnd();
 
	//MESA
    glLineWidth(20);
	Materiales(0.1, 0.18725, 0.1745,0.396, 0.74151, 0.69102,0.297254, 0.30829, 0.306678,0.1,1.0f); //PASAMOS EL MATERIAL
    glBegin(GL_LINES);
    glVertex3f(-0.15,-0.15,0.10);
    glVertex3f(-0.15,-0.3,0.10);
    glVertex3f(0.10,-0.15,0.10);
    glVertex3f(0.10,-0.3,0.10);
    glVertex3f(-0.15,-0.15,-0.20);
    glVertex3f(-0.15,-0.3,-0.20);
    glVertex3f(0.10,-0.15,-0.20);
    glVertex3f(0.10,-0.3,-0.20);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(0.12, -0.15, 0.12 );
    glVertex3f(0.12, -0.15, -0.22 );
    glVertex3f(-0.17, -0.15, -0.22 );
    glVertex3f(-0.17, -0.15, 0.12 );
    glEnd();

	//TETERA
    glutSolidTeapot(0.05);
    glFlush();
    glutSwapBuffers();
 
}
  
 
int main(int argc, char* argv[])
{   
    // INICIALIZA LA LIBRERIA AUXILIAR GLUT
    glutInit(&argc, argv);
    // INICIALIZA EL MODO DE VISUALIZACIÓN
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    // INDICAMOS EL TAMAÑO DE LA VENTANA, (ancho,alto)
    glutInitWindowSize (800, 600);
    // INDICAMOS LA POCICIÓN INICIAL, (xmin,ymin)
    glutInitWindowPosition (300, 100);
    glutCreateWindow ("CASA CON MESA Y TETERA - PM13004");  // ABRE LA VENTANA CON EL TITULO INDICADO
    init ();										        // INICIALIZA LOS VALORES
    glutDisplayFunc(display);	        				    // INDICA CUAL ES LA FUNCIÓN DE DIBUJO 
    glutMainLoop();
    return 0;
}
