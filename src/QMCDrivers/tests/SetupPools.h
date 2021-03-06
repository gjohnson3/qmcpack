//////////////////////////////////////////////////////////////////////////////////////
// This file is distributed under the University of Illinois/NCSA Open Source License.
// See LICENSE file in top directory for details.
//
// Copyright (c) 2019 QMCPACK developers.
//
// File developed by: Peter Doak, doakpw@ornl.gov, Oak Ridge National Laboratory
//
// File created by: Peter Doak, doakpw@ornl.gov, Oak Ridge National Laboratory
//////////////////////////////////////////////////////////////////////////////////////

#ifndef QMCPLUSPLUS_SETUP_POOLS_H
#define QMCPLUSPLUS_SETUP_POOLS_H

#include "Particle/tests/MinimalParticlePool.h"
#include "QMCWaveFunctions/tests/MinimalWaveFunctionPool.h"
#include "QMCHamiltonians/tests/MinimalHamiltonianPool.h"
#include "Message/Communicate.h"
#include "type_traits/template_types.hpp"

namespace qmcplusplus
{
namespace testing
{
class SetupPools
{
public:
  SetupPools();

  MinimalParticlePool mpp;
  MinimalWaveFunctionPool wfp;
  MinimalHamiltonianPool mhp;

  UPtr<ParticleSetPool> particle_pool;
  UPtr<WaveFunctionPool> wavefunction_pool;
  UPtr<HamiltonianPool> hamiltonian_pool;

  Libxml2Document doc;
  xmlNodePtr node;

  Communicate* comm;
};

} // namespace testing
} // namespace qmcplusplus
#endif
