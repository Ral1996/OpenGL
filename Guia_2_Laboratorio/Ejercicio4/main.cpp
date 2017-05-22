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
	 
	     "FIGURAS EN UN PLANO"
  
 */


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

void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode( GL_MODELVIEW_MATRIX );
    glLoadIdentity();

    glTranslatef(-20,-20,0);
    glRotatef(20,1,0,0);
    glRotatef(-15,0,1,0);
    glTranslatef(0,75,110);
    glPushMatrix();
    
    GLfloat light_position[] = { -100, 100.0, 125.0, 1}; 
    glLightfv(GL_LIGHT0,GL_POSITION,light_position);

	Materiales(0.05, 0.0, 0.0,0.5, 0.4, 0.4,0.7, 0.04, 0.04, 0.078125 ,1.0f); //PASAMOS EL MATERIAL
    glTranslatef(-60,-18,0);
    glutSolidSphere(40,50,50);//ESFERA
    glPopMatrix();
    glPushMatrix();
    glRotatef(-15,0,1,0);
    glRotatef(10,1,0,0);
    
	Materiales(0.05, 0.05, 0.0,0.5, 0.5, 0.4,0.7, 0.7, 0.04, 0.07812 ,1.0f); //PASAMOS EL MATERIAL
	glTranslatef(50,-5,0);
    glutSolidCube(50);        //CUBO
    glPopMatrix();
    glPushMatrix();
 
	Materiales(0.1, 0.18725, 0.1745,0.396, 0.74151, 0.69102,0.297254, 0.30829, 0.306678,0.1,1.0f); //PASAMOS EL MATERIAL
    glTranslatef(160,-25,0);
    glRotatef(-90,1,0,0);
    glutSolidCone(50,70,10,25);//CONO
    glPopMatrix();
    glFlush();
}

void reshape(int w, int h)
{
    glViewport(0, 0,  (GLsizei) w, (GLsizei) h);
    // Activamos la matriz de proyeccion.
    glMatrixMode(GL_PROJECTION);
    // "limpiamos" esta con la matriz identidad.
    glLoadIdentity();
    // Usamos proyeccion ortogonal
    glOrtho(-200, 200, -200, 200, -200, 200);
    // Activamos la matriz de modelado/visionado.
    glMatrixMode(GL_MODELVIEW);
    // "Limpiamos" la matriz
    glLoadIdentity();
}

int main(int argc, char** argv)
{
	// INICIALIZA LA LIBRERIA AUXILIAR GLUT
    glutInit(&argc,argv);
    // INICIALIZA EL MODO DE VISUALIZACIÓN
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
    // INDICAMOS EL TAMAÑO DE LA VENTANA, (ancho,alto)
    glutInitWindowSize(650,500);
    // INDICAMOS LA POCICIÓN INICIAL, (xmin,ymin)
    glutInitWindowPosition(300,100);
    glutCreateWindow ("FIGURAS EN UN PLANO - PM13004"); // ABRE LA VENTANA CON EL TITULO INDICADO
    glClearColor(0,0,1,0.0);
    //INCLUIMOS LUCES
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glShadeModel(GL_SMOOTH);
    glEnable(GL_NORMALIZE);
    glEnable(GL_DEPTH_TEST);
    glutMainLoop();

return 0;

}
