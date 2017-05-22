// INCLUIMOS CABEZERAS
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <SOIL/SOIL.h> 

/*
 * 
 * 		PROGRAMADOR: RAÚL MAURICIO PORTILLO MUÑOZ
 * 			 CARNET: PM13004
 * 			CATEDRÁ: ALGORITMOS GRÁFICOS
 * 
 */


GLuint texture[0];

void resize(int height, int width) {
    const float ar = (float) width / (float) height;
    glViewport(0, 10, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-ar, ar, -1.0, 1.0, 2.0, 90.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity() ;
}

static void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(0.0f,0.0f,-5.0f);
    
     texture[0] = SOIL_load_OGL_texture // CARGAMOS LA IMAGEN
    (
        "metal5.jpg",		//NOMBRE DE LA IMAGEN, GUARDADA EN LA MISMA CARPETA
        SOIL_LOAD_AUTO,
        SOIL_CREATE_NEW_ID,
        SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y | SOIL_FLAG_NTSC_SAFE_RGB | SOIL_FLAG_COMPRESS_TO_DXT
    );
		// TIPO DE SOMBREADO - TEXTURAS
		glEnable(GL_TEXTURE_2D);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);

		glBindTexture(GL_TEXTURE_2D, texture[0]);
		glutSolidTeapot(1.0);//TETERA
		glFlush ();
		glutSwapBuffers();
    
   
}

int main(int argc, char **argv)
{
	// INICIALIZA EL MODO DE VISUALIZACIÓN
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    // INICIALIZA LA LIBRERIA AUXILIAR GLUT
    glutInit(&argc, argv);
    // INDICAMOS EL TAMAÑO DE LA VENTANA, (ancho,alto)
    glutInitWindowSize(600, 600);
    // ABRE LA VENTANA CON EL TITULO INDICADO
    glutCreateWindow("Tetera con Textura Metalica - PM13004");
    glutReshapeFunc(resize);
    glutDisplayFunc(display);
    glEnable(GL_TEXTURE_2D);
    glShadeModel(GL_SMOOTH);
    glClearColor(0.0f, 0.0f, 0.0f, 0.5f);
    glClearDepth(1.0f);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LEQUAL);
    
    glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
    glutMainLoop();
}
