#include "../header/Type_A.h"
#include "../header/Player.h"
#include "gtest/gtest.h"

TEST(TypeATests, LevelUpTest) {
  Player* p = new TypeA("Test Player", 5, 5, 0, 0);
  p->levelUp();

  // ASSERT_EQ(ss.str(), "Level up!");
  // ASSERT_EQ(p->getLevel(), 1);
  // ASSERT_EQ(p.getMaxHealth(), 12);
  // ASSERT_EQ(p.getHealth(), 12);
  // ASSERT_EQ(p.getAttackStrength(), 7);
}

// TEST(TypeATests, InitialStatsTest) {
//   Player* p = new TypeA("Test Player", 10, 5, 0, 0);

//   ASSERT_EQ(p.getLevel(), 0);
//   ASSERT_EQ(p.getMaxHealth(), 10);
//   ASSERT_EQ(p.getHealth(), 10);
//   ASSERT_EQ(p.getAttackStrength(), 5);
// }