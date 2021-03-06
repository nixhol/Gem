 /* ------------------------------------------------------------------
  * GEM - Graphics Environment for Multimedia
  *
  *  Copyright (c) 2002-2011 IOhannes m zmölnig. forum::für::umläute. IEM. zmoelnig@iem.at
  *	zmoelnig@iem.kug.ac.at
  *  For information on usage and redistribution, and for a DISCLAIMER
  *  OF ALL WARRANTIES, see the file, "GEM.LICENSE.TERMS"
  *
  *  this file has been generated...
  * ------------------------------------------------------------------
  */

#ifndef _INCLUDE__GEM_OPENGL_GEMGLLOADNAME_H_
#define _INCLUDE__GEM_OPENGL_GEMGLLOADNAME_H_

#include "Base/GemGLBase.h"

/*
 CLASS
	GEMglLoadName
 KEYWORDS
	openGL	0
 DESCRIPTION
	wrapper for the openGL-function
	"glLoadName( GLuint name)"
 */

class GEM_EXTERN GEMglLoadName : public GemGLBase
{
	CPPEXTERN_HEADER(GEMglLoadName, GemGLBase);

	public:
	  // Constructor
	  GEMglLoadName (t_float);	// CON

	protected:
	  // Destructor
	  virtual ~GEMglLoadName ();
          // check extensions
          virtual bool isRunnable(void);

	  // Do the rendering
	  virtual void	render (GemState *state);

	// variables
	  GLuint	name;		// VAR
	  virtual void	nameMess(t_float);	// FUN


	private:

	// we need some inlets
	  t_inlet *m_inlet[1];

	// static member functions
	  static void	 nameMessCallback (void*, t_float);
};
#endif // for header file
