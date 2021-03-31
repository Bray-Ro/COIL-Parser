#pragma once

// Types of tokens
#define _KEYWORD                1
#define _OPERATOR               2
#define _SEPARATOR              3
#define _LITERAL                4
#define _IDENTIFIER             5
#define _COMMENT                6
#define _PUNCTUATOR             7
#define _SCOPE                  8
// Define Parser states
#define _SEARCHING		10
// Define Booleans
#define TRUE                    1
#define FALSE                   0




#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "useful_functions.h"
#include "coil-manifest.h"




typedef struct _PARSER_TOKEN {

	char _TOKEN[255];	
	char _TOKEN_TYPE; 
	
	/*Is this token storing a specific token or any token of a specified type?*/
	int _TYPE;
} _PARSER_TOKEN;


/*Stores proper grammar of a statement*/
typedef _PARSER_TOKEN  _STATEMENT_GRAMMAR[255];




/*What is the current state of the Parser?*/
char CURRENT_PARSER_STATE = _SEARCHING;




void COMMANDER_PARSER(_STATEMENT_GRAMMAR GRAMMAR[2550]) {

}






