//____________________________________________________________________________
/*!

\class    genie::IBDInteractionListGenerator

\brief    Generates a list of all the interactions that can be generated by the
          VLE SV QEL Nu-Nucleon generator

\author   Corey Reed <cjreed \at nikhef.nl>
          Nikhef

\created  Jun 26, 2009

\cpright  Copyright (c) 2003-2017, GENIE Neutrino MC Generator Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _INVERSEBETADECAY_INTERACTION_GENERATOR_H_
#define _INVERSEBETADECAY_INTERACTION_GENERATOR_H_

#include "EVGCore/InteractionListGeneratorI.h"

namespace genie {

   class IBDInteractionListGenerator : public InteractionListGeneratorI {
      private:
	 void LoadConfigData(void);

      public :
	 IBDInteractionListGenerator();
	 IBDInteractionListGenerator(string config);
	 virtual ~IBDInteractionListGenerator();

	 //-- implement the InteractionListGeneratorI interface
	 InteractionList * CreateInteractionList(const InitialState & init) const;
	 
	 // overload the Algorithm::Configure() methods to load private data
	 // members from configuration options
	 void Configure(const Registry & config);
	 void Configure(string config);
   };

}      // genie namespace
#endif // _SVQELNUNUCLEON_INTERACTION_GENERATOR_H_
