/*
 *  UselOS
 *  By M-374 LX <http://m374lx.users.sourceforge.net/>
 *  
 *  screen.h - Functions to access the screen directly
 */

#ifndef USELOS_SCREEN_H
#define USELOS_SCREEN_H

#include "types.h"

enum
{
	COLOR_BLACK = 0,
	COLOR_BLUE = 1,
	COLOR_GREEN = 2,
	COLOR_CYAN = 3,
	COLOR_RED = 4,
	COLOR_MAGENTA = 5,
	COLOR_BROWN = 6,
	COLOR_LIGHT_GREY = 7,
	COLOR_DARK_GREY = 8,
	COLOR_LIGHT_BLUE = 9,
	COLOR_LIGHT_GREEN = 10,
	COLOR_LIGHT_CYAN = 11,
	COLOR_LIGHT_RED = 12,
	COLOR_LIGHT_MAGENTA = 13,
	COLOR_LIGHT_BROWN = 14,
	COLOR_WHITE = 15,
};

#define DEFAULT_COLOR COLOR_LIGHT_GREY

#define SCREEN_WIDTH  80
#define SCREEN_HEIGHT 25

void screen_clear();

void screen_scrolldown();

void screen_setchar(u8 x, u8 y, char ch, u8 color);

#endif

