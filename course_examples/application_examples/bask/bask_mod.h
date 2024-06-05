//----------------------------------------------------------------------
//   Copyright 2009-2020 NXP
//   Copyright 2009 Vienna University of Technology
//   Copyright 2009-2014 Fraunhofer-Gesellschaft zur Foerderung
//					der angewandten Forschung e.V.
//   Copyright 2015-2020 COSEDA Technologies GmbH
//   All Rights Reserved Worldwide
//
//   Licensed under the Apache License, Version 2.0 (the
//   "License"); you may not use this file except in
//   compliance with the License.  You may obtain a copy of
//   the License at
//
//       http://www.apache.org/licenses/LICENSE-2.0
//
//   Unless required by applicable law or agreed to in
//   writing, software distributed under the License is
//   distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
//   CONDITIONS OF ANY KIND, either express or implied.  See
//   the License for the specific language governing
//   permissions and limitations under the License.
//----------------------------------------------------------------------

#ifndef _BASK_MOD_H_
#define _BASK_MOD_H_

#include <systemc-ams>

#include "mixer.h"
#include "sin_src.h"

SC_MODULE(bask_mod)
{
  sca_tdf::sca_in<bool>    in;
  sca_tdf::sca_out<double> out;
	
  sin_src sine;
  mixer   mix;

  SCA_CTOR(bask_mod);

 private:
  sca_tdf::sca_signal<double> carrier;
};

#endif // _BASK_MOD_H_
