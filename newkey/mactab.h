/*------------------------------------------------------------------------------
UniKey - Vietnamese Keyboard for Windows
Copyright (C) 1998-2002 Pham Kim Long
Contact: longp@cslab.felk.cvut.cz

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
--------------------------------------------------------------------------------*/
#ifndef __MACRO_TABLE_H
#define __MACRO_TABLE_H

#include "keycons.h"

struct MacroDef
{
	char *key;
	char *text;
};

class CMacroTable
{
public:
//	MacroDef *m_table[MAX_MACRO_ITEMS];
	MacroDef *m_table;
	char *m_macroMem;
//	char *m_current;

	int m_count;
	int m_memSize, m_occupied;

	CMacroTable(int memSize = MACRO_MEM_SIZE);
	~CMacroTable();
	int loadFromFile(const TCHAR *fname);
	int writeToFile(const TCHAR *fname);
	void resetContent();
	int addItem(const char *item);
	int addItem(const char *key, const char *text);
};

#endif