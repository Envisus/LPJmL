/**************************************************************************************/
/**                                                                                \n**/
/**                     e  q  u  i  l  s  o  m  . c                                \n**/
/**                                                                                \n**/
/**     C implementation of LPJmL                                                  \n**/
/**                                                                                \n**/
/** (C) Potsdam Institute for Climate Impact Research (PIK), see COPYRIGHT file    \n**/
/** authors, and contributors see AUTHORS file                                     \n**/
/** This file is part of LPJmL and licensed under GNU AGPL Version 3               \n**/
/** or later. See LICENSE file or go to http://www.gnu.org/licenses/               \n**/
/** Contact: https://gitlab.pik-potsdam.de/lpjml                                   \n**/
/**                                                                                \n**/
/**************************************************************************************/

#include "lpj.h"

/**
 *  DESCRIPTION
 *
 *  Analytically solves differential flux equations for fast and slow SOM 
 *  pools assuming annual litter inputs close to long term equilibrium
 *
 */

void equilsom(Cell *cell,           /**< pointer to cell */
              int ntotpft,          /**< total number of PFTs */
              const Pftpar pftpar[] /**< PFT parameter array */
             )
{
  int s;
  Stand *stand;
  
  foreachstand(stand,s,cell->standlist)
    equilsoil(&stand->soil,ntotpft,pftpar);
} /* of 'equilsom' */