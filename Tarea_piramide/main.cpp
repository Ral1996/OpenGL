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
GLfloat light_position[] = {0.0, 0.2, -0.9, 0.0};

GLint ancho=900;
GLint alto=600;

    // Propiedades del materiales globales
    GLfloat mat_ambient[] = { 0.0215, 0.1745, 0.0215,1.0f };
    GLfloat mat_diffuse[] = { 0.07568, 0.61424, 0.07568, 1.0f };
    GLfloat mat_specular[] = { 0.633, 0.727211, 0.633, 1.0f };
    GLfloat shine[] = {50.0};



void display(void)
{	

	
    /* AQUI BORRAMOS LA PANTALLA */
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT); 
    
    glMatrixMode( GL_MODELVIEW_MATRIX );// Resetear transformaciones
    
    glLoadIdentity();
    
    //setMaterial
    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, shine);
    // AQUI ROTAN EN EL EJE X, Y, Z
    glRotatef( rotate_x, 1.0, 0.0, 0.0 );
    glRotatef( rotate_y, 0.0, 1.0, 0.0 );
    glRotatef( rotate_z, 0.0, 0.0, 1.0 );
    glTranslatef(X, Y, Z);              // TRANSLADAR EN 3 EJES
    glScalef(scale, scale, scale);      // OTRAS TRANSFORMACIONES

    glBegin(GL_POLYGON);//TRIANGULO DERECHA
		glNormal3f (0.4, 0.0, -0.4);
        glVertex3f (0.4, 0.0, -0.4);
        glNormal3f (-0.4, 0.0, -0.4);
        glVertex3f (-0.4, 0.0, -0.4);
        glNormal3f (0.0, 0.9, 0.0);
        glVertex3f (0.0, 0.9, 0.0);
        glEnd();
	 //glColor3f(0.50,0.5,0.50);
	 glBegin(GL_POLYGON);//TRIANGULO TRASERO
		glNormal3f (-0.4, 0.0, -0.4);
		glVertex3f (-0.4, 0.0, -0.4);
		glNormal3f (-0.4, 0.0, 0.4);
		glVertex3f (-0.4, 0.0, 0.4);
		glNormal3f (0.0, 0.9, 0.0);
		glVertex3f (0.0, 0.9, 0.0);
		glEnd();
	 //glColor3f(0.0,0.0,1.0);
	 glBegin(GL_POLYGON);//TRIANGULO IZQUIERDA
		glNormal3f (-0.4, 0.0, 0.4);
		glVertex3f (-0.4, 0.0, 0.4);
		glNormal3f (0.4, 0.0, 0.4);
		glVertex3f (0.4, 0.0, 0.4);
		glNormal3f (0.0, 0.9, 0.0);
		glVertex3f (0.0, 0.9, 0.0);
		glEnd();

	 //lColor3f(0.0,1.0,0.0);
	 glBegin(GL_POLYGON);//TRIANGULO FRONTAL
		glNormal3f (0.4, 0.0, -0.4);
		glVertex3f (0.4, 0.0, -0.4);
		glNormal3f (0.4, 0.0, 0.4);
		glVertex3f (0.4, 0.0, 0.4);
		glNormal3f (0.0, 0.9, 0.0);
		glVertex3f (0.0, 0.9, 0.0);
		glEnd();
	 //glColor3f(1.0,0.0,1.0);
	 glBegin(GL_POLYGON); //BASE DE LA PIRAMIDE
		glNormal3f (-0.4, 0.0, -0.4);
		glVertex3f (-0.4, 0.0, -0.4);
		glNormal3f (-0.4, 0.0, -0.4);
		glVertex3f (-0.4, 0.0, -0.4);
		glNormal3f (-0.4, 0.0, 0.4);
		glVertex3f (-0.4, 0.0, 0.4);
		glNormal3f (0.4, 0.0, 0.4);
		glVertex3f (0.4, 0.0, 0.4);
		glEnd();
    
    glFlush ();
    glutSwapBuffers();
}

void init(void)
{
   // AQUI SELECCIONAMOS EL COLOR DE BORRADO 
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glShadeModel (GL_SMOOTH);
    glLightfv(GL_LIGHT0,GL_POSITION,light_position);
    glEnable(GL_LIGHTING);       // ACTIVAN LA ILUMINACIÓN DE LA TETERA
	glEnable(GL_LIGHT0);         // ACTIVAN LA LUZ DE LA TETERA
	glDepthFunc(GL_LESS);
	glEnable(GL_DEPTH_TEST);
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    ancho = 900;
    alto = 600;

}

void reshape(int width, int height) 
{

	glViewport(0, 0, width,height);     //CONFIGURAMOS EL Viewport, PARA CONTROLAR LAS DIMENSIONES DE LA PANTALLA
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();                                                   // AQUI RESETEAMOS LAS TRANSFORMACIONES 
	glOrtho(-10, 10, -10, 10, -10, 10);                                       // DEFINIMOS EL ORTHO
	glLoadIdentity();                                                   // AQUI RESETEAMOS LAS TRANSFORMACIONES 
	gluPerspective(45.0, GLfloat(width) / GLfloat(height), 1.0, 50.0); 	// DEFINIMOS UNA PROYECCIÓN DE PERSPECTIVA 
	
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
	
	//id_menu[1]=key;
    switch(key)
    {
	
	case '1':
        //Pasamos Material Gris
        mat_ambient[0]=  (GLfloat)0.05375; mat_ambient[1]=(GLfloat)0.05; mat_ambient[2]=(GLfloat)0.06625; mat_ambient[3]=(GLfloat)1.0;
        mat_diffuse[0] = (GLfloat) 0.18275; mat_diffuse[1]=(GLfloat) 0.17; mat_diffuse[2]=(GLfloat) 0.22525; mat_diffuse[3]=(GLfloat) 1.0;
        mat_specular[0] =  (GLfloat) 0.532741; mat_specular[1]=(GLfloat) 0.528634; mat_specular[2]=(GLfloat) 0.546435; mat_specular[3]=(GLfloat) 1.0;
        shine[0] = (GLfloat) 56.3;

        break;
    case '2':
        //Pasamos Material Ruby
        mat_ambient[0]=  (GLfloat)0.1745; mat_ambient[1]=(GLfloat)0.01175; mat_ambient[2]=(GLfloat)0.01175; mat_ambient[3]=(GLfloat)1.0;
        mat_diffuse[0] = (GLfloat)0.61424; mat_diffuse[1]=(GLfloat)0.04136; mat_diffuse[2]=(GLfloat)0.04136; mat_diffuse[3]=(GLfloat) 1.0;
        mat_specular[0] =  (GLfloat)0.727811; mat_specular[1]=(GLfloat)0.626959; mat_specular[2]=(GLfloat)0.626959; mat_specular[3]=(GLfloat) 1.0;
        shine[0] = (GLfloat) 0.6;

        break;
    case '3':
        //Pasamos Material Yellow rubber
        mat_ambient[0]=  (GLfloat)0.05; mat_ambient[1]=(GLfloat)0.05; mat_ambient[2]=(GLfloat)0.0; mat_ambient[3]=(GLfloat)1.0;
        mat_diffuse[0] = (GLfloat)0.5; mat_diffuse[1]=(GLfloat)0.5; mat_diffuse[2]=(GLfloat)0.04; mat_diffuse[3]=(GLfloat) 1.0;
        mat_specular[0] =  (GLfloat)0.7; mat_specular[1]=(GLfloat)0.7; mat_specular[2]=(GLfloat)0.04; mat_specular[3]=(GLfloat) 1.0;
        shine[0] = (GLfloat) 0.07812;
        
        break;
    case '4':
        //Pasamos Material Cyan rubber
        mat_ambient[0]=  (GLfloat)0.0; mat_ambient[1]=(GLfloat)0.05; mat_ambient[2]=(GLfloat)0.0; mat_ambient[3]=(GLfloat)1.0;
        mat_diffuse[0] = (GLfloat)0.5; mat_diffuse[1]=(GLfloat)0.4; mat_diffuse[2]=(GLfloat)0.5; mat_diffuse[3]=(GLfloat) 1.0;
        mat_specular[0] =  (GLfloat)0.04; mat_specular[1]=(GLfloat)0.7; mat_specular[2]=(GLfloat)0.7; mat_specular[3]=(GLfloat) 1.0;
        shine[0] = (GLfloat) 0.078125;

        break;
    case '5':
        //Pasamos Material Turquoise
        mat_ambient[0]=  (GLfloat)0.1; mat_ambient[1]=(GLfloat)0.18725; mat_ambient[2]=(GLfloat)0.1745; mat_ambient[3]=(GLfloat)1.0;
        mat_diffuse[0] = (GLfloat)0.396; mat_diffuse[1]=(GLfloat)0.74151; mat_diffuse[2]=(GLfloat)0.69102; mat_diffuse[3]=(GLfloat) 1.0;
        mat_specular[0] =  (GLfloat)0.297254; mat_specular[1]=(GLfloat)0.30829; mat_specular[2]=(GLfloat)0.306678; mat_specular[3]=(GLfloat) 1.0;
        shine[0] = (GLfloat) 0.1;

        break;
    case 'Z':
        scale=0.2; //AQUI ALEJAMOS LA TETERA
        break;
    case 'z':
        scale=1.0; //AQUI ACERCAMOS LA TETERA
        break;
    case 'd':
        X += 0.01f; //AQUI NOS MOVEMOS EN EL EJE "X" A LA DERECHA
        break;
    case 'a':
        X -= 0.01f; //AQUI NOS MOVEMOS EN EL EJE "X" A LA IZQUIERDA
        break;
    case 'w':
        Y += 0.01f; //AQUI NOS MOVEMOS EN EL EJE "Y" HACIA ARRIBA
        break;
    case 's':
        Y -= 0.01f; //AQUI NOS MOVEMOS EN EL EJE "Y" HACIA ABAJO
        break;
    case 'q':      // SALIR DEL PROGRAMA
      exit(0);  
    }
    glutPostRedisplay();
}

int main(int argc, char** argv)
{
    // INICIALIZA LA LIBRERIA AUXILIAR GLUT
    glutInit(&argc, argv);
    // INICIALIZA EL MODO DE VISUALIZACIÓN
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    // INDICAMOS EL TAMAÑO DE LA VENTANA, (ancho,alto)
    glutInitWindowSize(900, 600);  
    //glutInitWindowSize(ancho, alto); 
    // INDICAMOS LA POCICIÓN INICIAL, (xmin,ymin)
    glutInitWindowPosition(0,0);
    glutCreateWindow("Dibujando Piramide 3D - PM13004"); // ABRE LA VENTANA CON EL TITULO INDICADO
    
    init();                      // INICIALIZA LOS VALORES
    glutDisplayFunc(display);    // INDICA CUAL ES LA FUNCIÓN DE DIBUJO 
    glutReshapeFunc(reshape);    // INDICA LA FUNCION DE ACERCAR Y ALEJAR
    glutIdleFunc(idDisplay);     // PASAMOS DISPLAY
    glutKeyboardFunc(keyboard);  // AQUI SE INDICA LA FUNCION DEL TECLADO
    glutSpecialFunc(specialKeys);// AQUI SE INDICA LA FUNCIÓN DE TECLAS ESPECIALES
    
	//glEnable(GL_COLOR_MATERIAL); // ESPECIFICA QUE PARÁMETROS DE MATERIAL CONTROLAN EL COLOR ACTUAL
	//glEnable(GL_NORMALIZE);      // PARA HABILITAR LA NORMALIZACIÓN AUTOMÁTICA
	
    glutMainLoop();
    return 0;

}
