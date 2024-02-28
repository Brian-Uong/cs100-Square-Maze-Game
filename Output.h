using namespace std;

#include "Player.h"
#include "wrongInput.hpp"

#ifndef __OUTPUT_H__
#define __OUTPUT_H__

class Output {
public:
  Output();
  void OutputDeath(Player);
  void OutputChoice();
  void OutputGameSetup();
  void OutputMove(Player);
  void OutputLevelUpPlayer(Player);
  void OutputAnalyze(Player, Player);
  void OutputEncounter(Player, Player);
  void OutputWin(Player);
  void OutputMenu();
  void OutputBadInput();
  void OutputPlay();
  void OutputHowToPlay();
  void OutputExitRoom(Player);
  void OutputFight(Player, Player);
  Player OutputPlayer();

private: 
  void OutputColor(int, int, string);
};

#endif