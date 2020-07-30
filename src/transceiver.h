/*                                                     -*- linux-c -*-
    Copyright (C) 2004 Tom Szilagyi

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

    $Id$
*/

#ifndef AQUALUNG_TRANSCEIVER_H
#define AQUALUNG_TRANSCEIVER_H


/* valid remote command codes */
#define RCMD_PING        1
#define RCMD_BACK        2
#define RCMD_PLAY        3
#define RCMD_PAUSE       4
#define RCMD_STOP        5
#define RCMD_FWD         6
#define RCMD_ADD_FILE    7
#define RCMD_ADD_COMMIT  8
#define RCMD_QUIT        9
#define RCMD_VOLADJ     10
#define RCMD_CUSTOM     11

int create_socket(const char * filename);
char receive_message(int fd, char * cmdarg, size_t cmdarg_size);
void setup_app_socket(void);
void close_app_socket(void);
int send_message(const char * filename, char * message, int len);
void send_message_to_session(int session_id, char * message, int len);
int send_message_to_session_report_error(int session_id, char * message, int len, int report_error);


#endif /* AQUALUNG_TRANSCEIVER_H */

// vim: shiftwidth=8:tabstop=8:softtabstop=8 :  

