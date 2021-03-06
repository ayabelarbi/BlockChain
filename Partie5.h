#ifndef _PARTIE5_H
#define _PARTIE5_H

#include "Partie4.h"


//VOTE ET CREATION DE BLOCS VALIDES
void submit_vote(Protected* p); 
void create_block(CellTree* tree, Key* author, int d);
void add_block(int d, char* name);
Key* compute_winner_BT(CellTree* tree, CellKey* candidates, CellKey* voters, int sizeC, int sizeV); 
CellTree* read_tree();

#endif