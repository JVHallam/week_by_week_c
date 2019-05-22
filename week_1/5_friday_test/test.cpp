#include "pch.h"
#include <5_friday.h>

/*
	Description:
		What we're testing for here.

	Caveats:
		Anything that might cause a problem to the user in the future.
*/
TEST(main, main) {
	EXPECT_EQ(friday_main(), 500);
}