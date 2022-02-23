#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "TempCheckAndAlert.h"

actionList fpArrayOfActions[ALERT_TARGET_LENGTH] = {sendToController,sendToEmail};






TEST_CASE("Sending the Breach information to EMAIL")
{
  REQUIRE(sendToEmail(TOO_HIGH) == TO_EMAIL);
  REQUIRE(sendToEmail(TOO_LOW) == TO_EMAIL);
  
}



