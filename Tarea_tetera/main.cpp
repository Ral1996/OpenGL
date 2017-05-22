// INCLUIMOS CABEZERAS
#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>

/*
 
     CATEDRA: ALGORITMOS GRÁFICOS
 PROGRAMADOR: RAÚL MAURICIO PORTILLO MUÑOZ
      CARNET: PM13004
  
 */

//AQUI DEFINIMOS LAS VARIABLES PARA GIRAR Y TRANSLADAR
double rotate_y=0;
double rotate_x=0;
double rotate_z=0;

GLfloat X = 0.0f;
GLfloat Y = 0.0f;
GLfloat Z = 0.0f;
GLfloat scale = 1.0f;

GLint ancho=900;
GLint alto=600;

void init(void)
{
    /* AQUI SELECCIONAMOS EL COLOR DE BORRADO */
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glShadeModel (GL_FLAT);
    ancho = 900;
    alto = 600;
}

void display(void)
{
    /* AQUI BORRAMOS LA PANTALLA */
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();                    // AQUI RESETEAMOS LAS TRANSFORMACIONES 
    // AQUI ROTAN EN EL EJE X, Y, Z
    glRotatef( rotate_x, 1.0, 0.0, 0.0 );
    glRotatef( rotate_y, 0.0, 1.0, 0.0 );
    glRotatef( rotate_z, 0.0, 0.0, 1.0 );
    glTranslatef(X, Y, Z);              // TRANSLADAR EN 3 EJES
    glScalef(scale, scale, scale);      // OTRAS TRANSFORMACIONES
    glMatrixMode(GL_MODELVIEW);         /* seleccionamos la matriz modelo/vista */
    glColor3f(0.0, 0.0, 1.0);           //AQUI LE APLICAMOS EL COLOR AZUL A LA TETERA
    //glTranslatef(0.0, 0.0, 0.0);
    // APLICANDO gluLookAt PARA UNA VISTA DE PLANTA SOBRE LA TETERA
    gluLookAt(0.0,0.5,0.0,  //punto de vista en el eje X,Y,Z
			  0.0,0.2,0.0,  //Centro del Objeto en el eje X,Y,Z
			  0.5,0.0,0.0); //Orientación de la cámara (vector UP el eje X,Y,Z)
    
    /* AQUI DIBUJAMOS LA TETERA */
    glutWireTeapot(0.5); //TAMBIEN LE DAMOS EL SIZE DE 0.5 A LA TETERA
    /* VACIA EL BUFFER DE DIBUJO */
    glFlush ();
    glutSwapBuffers();
}

void reshape(int width, int height) 
{
	
	glViewport(0, 0, width,height);     //CONFIGURAMOS EL Viewport, PARA CONTROLAR LAS DIMENSIONES DE LA PANTALLA
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();                                                   // AQUI RESETEAMOS LAS TRANSFORMACIONES 
	glOrtho(-1, 1, -1, 1, -1, 1);                                       // DEFINIMOS EL ORTHO
	glLoadIdentity();                                                   // AQUI RESETEAMOS LAS TRANSFORMACIONES 
	gluPerspective(60.0, GLfloat(width) / GLfloat(height), 1.0, 20.0); 	// DEFINIMOS UNA PROYECCIÓN DE PERSPECTIVA 
	
	ancho = width;
    alto = height;
	
}
 

// FUNCIÓN PARA CONTROLAR TECLAS ESPECIALES 
void specialKeys( int key, int x, int y )
{

    //  Flecha derecha: aumentar rotación 7 grados
    if (key == GLUT_KEY_RIGHT)
        rotate_y += 7;

    //  Flecha izquierda: rotación en eje Y negativo 7 grados
    else if (key == GLUT_KEY_LEFT)
        rotate_y -= 7;
        
    //  Flecha arriba: rotación en eje X positivo 7 grados
    else if (key == GLUT_KEY_UP)
        rotate_x += 7;
        
    //  Flecha abajo: rotación en eje X negativo 7 grados
    else if (key == GLUT_KEY_DOWN)
        rotate_x -= 7;

    //  SOLICITA ACTUALIZACIÓN DE VISUALIZACIÓN
    glutPostRedisplay();

}
void idDisplay()
{
    display();// PASAMOS DISPLAY
}

 
void keyboard(unsigned char key, int x, int y)
{
    switch(key)
    {
   
    case 'Z':
        scale=0.5; //AQUI ALEJAMOS LA TETERA
        break;
    case 'z':
        scale=1.1; //AQUI ACERCAMOS LA TETERA
        break;
    case '1':
        X += 0.1f; //AQUI NOS MOVEMOS EN EL EJE "X" A LA DERECHA
        break;
    case '2':
        X -= 0.1f; //AQUI NOS MOVEMOS EN EL EJE "X" A LA IZQUIERDA
        break;
    case '3':
        Y += 0.1f; //AQUI NOS MOVEMOS EN EL EJE "Y" HACIA ARRIBA
        break;
    case '4':
        Y -= 0.1f; //AQUI NOS MOVEMOS EN EL EJE "Y" HACIA ABAJO
        break;
    case 'q':      // SALIR DEL PROGRAMA
      exit(0);
      
    }
}

int main(int argc, char** argv)
{
    // INICIALIZA LA LIBRERIA AUXILIAR GLUT
    glutInit(&argc, argv);
    // INICIALIZA EL MODO DE VISUALIZACIÓN
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    // INDICAMOS EL TAMAÑO DE LA VENTANA, (ancho,alto)
    glutInitWindowSize(900, 600);  
    glutInitWindowSize(ancho, alto); 
    // INDICAMOS LA POCICIÓN INICIAL, (xmin,ymin)
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Dibujando Tetera 3D - PM13004"); // ABRE LA VENTANA CON EL TITULO INDICADO
    
    init();                      // INICIALIZA LOS VALORES
    glutDisplayFunc(display);    // INDICA CUAL ES LA FUNCIÓN DE DIBUJO 
    glutReshapeFunc(reshape);    // INDICA LA FUNCION DE ACERCAR Y ALEJAR
    glutIdleFunc(idDisplay);     // PASAMOS DISPLAY
    glutKeyboardFunc(keyboard);  // AQUI SE INDICA LA FUNCION DEL TECLADO
    glutSpecialFunc(specialKeys);// AQUI SE INDICA LA FUNCIÓN DE TECLAS ESPECIALES
    
   
    glEnable(GL_LIGHTING);       // ACTIVAN LA ILUMINACIÓN DE LA TETERA
	glEnable(GL_LIGHT0);         // ACTIVAN LA ILUMINACION DE LA TETERA
	glEnable(GL_COLOR_MATERIAL); // ESPECIFICA QUE PARÁMETROS DE MATERIAL CONTROLAN EL COLOR ACTUAL
	glEnable(GL_NORMALIZE);      // PARA HABILITAR LA NORMALIZACIÓN AUTOMÁTICA

    glutMainLoop();

}

