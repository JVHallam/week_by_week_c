#include "pch.h"
#include <4_thursday.h>

/*
	Description:
		What we're testing for here.

	Caveats:
		Anything that might cause a problem to the user in the future.
*/
TEST(main, main) {
	EXPECT_EQ(thursday_main(), 400);
}