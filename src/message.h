/******************************************************************************
 *
 * 
 *
 * Copyright (C) 1997-2014 by Dimitri van Heesch.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation under the terms of the GNU General Public License is hereby 
 * granted. No representations are made about the suitability of this software 
 * for any purpose. It is provided "as is" without express or implied warranty.
 * See the GNU General Public License for more details.
 *
 * Documents produced by Doxygen are derivative works derived from the
 * input used in their production; they are not affected by this license.
 *
 */

#ifndef MESSAGE_H
#define MESSAGE_H

#include <stdio.h>
#include <stdarg.h>

extern void msg(const char *fmt, ...);
extern void warn(const char *file,int line,const char *fmt, ...);
extern void va_warn(const char *file,int line,const char *fmt, va_list args);
extern void warn_simple(const char *file,int line,const char *text);
extern void warn_undoc(const char *file,int line,const char *fmt, ...);
extern void warn_doc_error(const char *file,int line,const char *fmt, ...);
extern void warn_uncond(const char *fmt, ...);
extern void err(const char *fmt, ...);
void initWarningFormat();

/*
After SHA-1: 3c0a246bd1bcf6f0d560394fd81616260a174ae8 (2013-11-14),
we cannot build doxygen because the definitions below are not found.
The constants below are used as the first parameter of printlex() function.
*/
enum
{
	fortranscannerYY_flex_debug = 1, // Should not be zero. see the definition of printlex() on message.cpp.
	preYY_flex_debug,
	fortrancodeYY_flex_debug,
	defargsYY_flex_debug,
	doctokenizerYY_flex_debug,
	pycodeYY_flex_debug,
	vhdlcodeYY_flex_debug,
	vhdlscannerYY_flex_debug,
	pyscannerYY_flex_debug,
	scannerYY_flex_debug,
	declinfoYY_flex_debug,
	commentscanYY_flex_debug,
	configYY_flex_debug,
	commentcnvYY_flex_debug,
	cppExpYY_flex_debug,
	codeYY_flex_debug,
	constexpYY_flex_debug,
	tclscannerYY_flex_debug,
};

extern void printlex(int dbg, bool enter, const char *lexName, const char *fileName);
#endif
