#include "pch.h"
#include <3_wednesday.h>

/*
	Description:
		What we're testing for here.

	Caveats:
		Anything that might cause a problem to the user in the future.
*/
TEST(main, main) {
	EXPECT_EQ(wednesday_main(), 300);
}