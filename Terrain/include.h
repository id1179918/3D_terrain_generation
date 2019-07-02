#include "esUtil.h"

typedef struct
{
   // Handle to a program object
   GLuint programObject;

} UserData;

void Draw(ESContext *);
int Init(ESContext *);
GLuint LoadShader(GLenum, const char *);