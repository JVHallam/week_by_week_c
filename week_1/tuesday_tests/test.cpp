#include "pch.h"
#include <2_tuesday.h>

/*
	Description:
		What we're testing for here.

	Caveats:
		Anything that might cause a problem to the user in the future.
*/
TEST(main, main) {
	EXPECT_EQ(tuesday_main(), 200);
}