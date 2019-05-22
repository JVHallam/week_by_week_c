#include "pch.h"
#include <1_monday.h>

/*
	Description:
		What we're testing for here.

	Caveats:
		Anything that might cause a problem to the user in the future.
*/
TEST(setup, setup) {
	EXPECT_EQ(monday_main(), 100);
}