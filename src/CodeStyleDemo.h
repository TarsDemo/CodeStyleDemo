#ifndef _CodeStyleDemo_H_
#define _CodeStyleDemo_H_

#include <iostream>
#include "servant/Application.h"

using namespace tars;

/**
 *
 **/
class CodeStyleDemo : public Application
{
public:
	/**
     *
     **/
	virtual ~CodeStyleDemo(){};

	/**
     *
     **/
	virtual void initialize();

	/**
     *
     **/
	virtual void destroyApp();
};

extern CodeStyleDemo g_app;

////////////////////////////////////////////
#endif
