#include "include.h"

void Shutdown (ESContext *esContext)
{
   UserData *userData = esContext->userData;

   glDeleteProgram(userData->programObject);
   return;
}

int esMain(ESContext *esContext)
{
    esContext->userData = malloc(sizeof(UserData));

    esCreateWindow(esContext, "Hello Triangle", 800, 800, ES_WINDOW_RGB);

    if ( !Init (esContext) )
       return (GL_FALSE);

    esRegisterShutdownFunc(esContext, Shutdown);
    esRegisterDrawFunc(esContext, Draw);

    return (GL_TRUE);
}
