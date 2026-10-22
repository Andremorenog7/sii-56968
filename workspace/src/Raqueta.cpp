// Raqueta.cpp: implementation of the Raqueta class.
//
//////////////////////////////////////////////////////////////////////

#include "Raqueta.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Raqueta::Raqueta()
{
	//velocidad.x = 0;
    //velocidad.y = 0;
	//para la velocidad
}

Raqueta::~Raqueta()
{

}

void Raqueta::Mueve(float t)
{
    y1 = y1 + velocidad.y * t;
    y2 = y2 + velocidad.y * t;
}
