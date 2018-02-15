// add your includes to this file instead of to individual .cpp files
// to enjoy the benefits of precompiled headers:
// - fast compilation
// - solve issues with the order of header files once (here)
// do not include headers in header files (ever).

#define SCRWIDTH		800
#define SCRHEIGHT		512
// #define FULLSCREEN
// #define ADVANCEDGL	// faster if your system supports it

#include <inttypes.h>
extern "C" 
{ 
#include <GL/glew.h>
}
#include <GL/gl.h>
// #include "io.h"
#include <fstream>
#include <stdio.h>
#include <fcntl.h>
#include <SDL2/SDL.h>
#include <FreeImage.h>
#include <math.h>
#include <stdlib.h>
#include <emmintrin.h>
#include <immintrin.h>
//#include <threads.h>
#include <assert.h>

#include "template.h"
#include "surface.h"

using namespace std;
using namespace Tmpl8;

#include "game.h"
