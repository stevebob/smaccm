#ifndef __SMACCM_Decrypt_types__H
#define __SMACCM_Decrypt_types__H

#include "smaccm_top_i_types.h"

/**************************************************************************
  Copyright (c) 2013-2016 Rockwell Collins and the University of
  Minnesota. Developed with the sponsorship of the Defense Advanced
  Research Projects Agency (DARPA).

  Permission is hereby granted, free of charge, to any person
  obtaining a copy of this data, including any software or models
  in source or binary form, as well as any drawings,
  specifications, and documentation (collectively "the Data"), to
  deal in the Data without restriction, including without
  limitation the rights to use, copy, modify, merge, publish,
  distribute, sublicense, and/or sell copies of the Data, and to
  permit persons to whom the Data is furnished to do so, subject to
  the following conditions:

  The above copyright notice and this permission notice shall be
  included in all copies or substantial portions of the Data.

  THE DATA IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
  OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS, SPONSORS,
  DEVELOPERS, CONTRIBUTORS, OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
  CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF
  CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
  CONNECTION WITH THE DATA OR THE USE OR OTHER DEALINGS IN THE
  DATA.

 **************************************************************************/


/**************************************************************************

  ***AUTOGENERATED CODE: DO NOT MODIFY***

  This header section contains the AADL gluecode interfaces used by the client
  for the thread implementations.

 **************************************************************************/

    // These are functions that are expected to be provided by the user.
    void component_entry(const int64_t * periodic_dispatcher); 

    void component_init(const int64_t * Decrypt_initializer); 



    // These are functions that are provided by the AADL middleware for 
    // communication with other threads
    bool Decrypt_write_self2server(const SMACCM_DATA__GIDL self2server); 

    bool Decrypt_read_periodic_dispatcher(int64_t * periodic_dispatcher); 
    bool Decrypt_read_Decrypt_initializer(int64_t * Decrypt_initializer); 
    bool Decrypt_read_uart2self(SMACCM_DATA__UART_Packet_i * uart2self); 

    
/* endif for: #ifndef __SMACCM_Decrypt_types__H */
#endif

/**************************************************************************
  End of autogenerated file: /home/ajgacek/minitower/june/apps/smaccmpilot/components/Decrypt/include/smaccm_Decrypt.h
 **************************************************************************/

