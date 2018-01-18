//____________________________________________________________________________
/*!

\class    genie::COHInteractionListGenerator

\brief    Concrete implementations of the InteractionListGeneratorI interface.
          Generates a list of all the Interaction (= event summary) objects that
          can be generated by the COH EventGenerator.

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  December 19, 2005

\cpright  Copyright (c) 2003-2017, GENIE Neutrino MC Generator Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _COH_INTERACTION_LIST_GENERATOR_H_
#define _COH_INTERACTION_LIST_GENERATOR_H_

#include "Framework/EventGen/InteractionListGeneratorI.h"

namespace genie {

class COHInteractionListGenerator : public InteractionListGeneratorI {

public :

  COHInteractionListGenerator();
  COHInteractionListGenerator(string config);
  ~COHInteractionListGenerator();

  //-- implement the InteractionListGeneratorI interface
  InteractionList * CreateInteractionList(const InitialState & init) const;

  //-- overload the Algorithm::Configure() methods to load private data
  //   members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  void LoadConfigData(void);

  bool fIsCC;
  bool fIsNC;
};

}      // genie namespace

#endif // _COH_INTERACTION_LIST_GENERATOR_H_
