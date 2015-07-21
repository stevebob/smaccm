#ifndef __SMACCM_test_irq1_impl_Instance_decls__H
#define __SMACCM_test_irq1_impl_Instance_decls__H

/**************************************************************************
  Copyright (c) 2013, 2014, 2015 Rockwell Collins and the University of Minnesota.
  Developed with the sponsorship of the Defense Advanced Research Projects Agency (DARPA).

  Permission is hereby granted, free of charge, to any person obtaining a copy of this data,
  including any software or models in source or binary form, as well as any drawings, specifications, 
  and documentation (collectively "the Data"), to deal in the Data without restriction, including 
  without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, 
  and/or sell copies of the Data, and to permit persons to whom the Data is furnished to do so, 
  subject to the following conditions: 

  The above copyright notice and this permission notice shall be included in all copies or
  substantial portions of the Data.

  THE DATA IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT 
  LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. 
  IN NO EVENT SHALL THE AUTHORS, SPONSORS, DEVELOPERS, CONTRIBUTORS, OR COPYRIGHT HOLDERS BE LIABLE 
  FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, 
  ARISING FROM, OUT OF OR IN CONNECTION WITH THE DATA OR THE USE OR OTHER DEALINGS IN THE DATA. 

 **************************************************************************/


/**************************************************************************

   File: C:\docs\git_smaccm\smaccm\models\Trusted_Build_Test\test_irq1_eChronos\gen\smaccm_decls.h
   Created on: 2015/07/21 17:27:23
   using Dulcimer AADL system build tool suite 

   ***AUTOGENERATED CODE: DO NOT MODIFY***

  This file contains the declarations required for the cross-component 
  RPC calls for eChronos.

 **************************************************************************/
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <smaccm_test_irq1_impl_types.h>
#include <rtos-kochab.h>

// to initialize periodic dispatcher.  Call from main() before
// starting OS.

bool initialize_periodic_dispatcher(); 

   bool sender_sender_initializer(const int64_t * arg); bool sender_Input1(); 

   void smaccm_entrypoint_receiver_Input1(
     const uint32_t * in_arg ,
     smaccm_receiver_Input1_struct *out_arg);

/* endif for: #ifndef __SMACCM_test_irq1_impl_Instance_decls__H */
#endif

/**************************************************************************
  End of autogenerated file: C:\docs\git_smaccm\smaccm\models\Trusted_Build_Test\test_irq1_eChronos\gen\smaccm_decls.h
 **************************************************************************/

