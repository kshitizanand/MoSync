/* Copyright (C) 2009 Mobile Sorcery AB

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License, version 2, as published by
the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with this program; see the file COPYING.  If not, write to the Free
Software Foundation, 59 Temple Place - Suite 330, Boston, MA
02111-1307, USA.
*/

#include <ma.h>
#include <IX_CALL.h>
#include <conprint.h>
#include <maassert.h>

extern "C" int MAMain() {
	InitConsole();
	gConsoleLogging = 1;

	printf("Calling...\n");
	int res = maCallDial("0703075652");
	printf("First result: %i\n", res);

	while(res == 0) {
		EVENT event;
		maWait(0);
		while(maGetEvent(&event)) {
			if(event.type == EVENT_TYPE_CLOSE ||
				(event.type == EVENT_TYPE_KEY_PRESSED && event.key == MAK_0))
			{
				maExit(0);
			} else if(event.type == EVENT_TYPE_CALL) {
				printf("Call state: %i\n", event.state);
			}
		}
	}
	FREEZE;
}
