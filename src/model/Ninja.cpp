# include "../../include/model/Ninja.h"
# include "../../include/model/Parchis.h"
# include "../personal/AIPlayer.h"

void Ninja::think(color& c_piece, int& id_piece, int& dice) const{
   // jeje
   AIPlayer::think(c_piece, id_piece, dice); // Nope ;)
}

void Ninja::setNinjaName(){
   name = "Ninja";
}
