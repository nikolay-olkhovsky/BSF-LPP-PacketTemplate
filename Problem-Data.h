/*==============================================================================
Project: LiFe
Theme: Packet LPP Generator
Module: Problem-Data.h (Problem Data)
Prefix: PD
Author: Nikolay A. Olkhovsky
This source code has been produced with using BSF-skeleton
==============================================================================*/
#include "Problem-Types.h"		// Problem Parameters 
using namespace std;

static PT_unsigned_T PD_index = 0;			// Index of current LPP in dataset
CProblem* PD_currentProblem;

//========================== Files ==============================
CMTXX0PacketWriter*		PD_packetWriter;
CMTXReader*				PD_packetReader;
