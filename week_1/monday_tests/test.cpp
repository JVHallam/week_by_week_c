#include "pch.h"
#include <1_monday.h>

TEST(MAIN, ADD) {
	for(int i = 0; i < 10; ++i) {
		for (int j = 0; j < 10; ++j) {
			EXPECT_EQ(add(i, j), i + j);
		}
	}
}

TEST(MAIN, SUBTRACT) {
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 10; ++j) {
			EXPECT_EQ(subtract(i, j), i - j);
		}
	}
}

TEST(MAIN, DIVIDE) {
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 10; ++j) {
			EXPECT_EQ(divide(i, j), i / j);
		}
	}
}

TEST(MAIN, REMAINDER) {
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 10; ++j) {
			EXPECT_EQ(remainder(i, j), i % j);
		}
	}
}

TEST(MAIN, MULTIPLY) {
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 10; ++j) {
			EXPECT_EQ(remainder(i, j), i * j);
		}
	}
}