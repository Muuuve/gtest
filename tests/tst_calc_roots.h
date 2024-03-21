#ifndef TST_ROOTS_H
#define TST_ROOTS_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

extern "C" {
#include "../app/roots.h"
}

int answer;
double result[2];

TEST(roots, right_answer) {
    answer = roots(result, 1, -5, 6);
    ASSERT_EQ(answer, 1);
    ASSERT_EQ(result[0], 3);
    ASSERT_EQ(result[1], 2);
}

TEST(roots, float_input_float_out) {
    answer = roots(result, 1, -4, 3.75);
    ASSERT_EQ(answer, 1);
    ASSERT_EQ(result[0], 2.5);
    ASSERT_EQ(result[1], 1.5);
}

TEST(roots, one_root) {
    answer = roots(result, 1, -6, 9);
    ASSERT_EQ(answer, 1);
    ASSERT_EQ(result[0], 3);
    ASSERT_EQ(result[1], 3);
}

TEST(roots, invalid_input) {
    answer = roots(result, 0, 2, 3);
    ASSERT_EQ(answer, 0);
}


TEST(roots, no_root) {
    answer = roots(result, 1, 2, 3);
    ASSERT_EQ(answer, 0);
}

#endif // TST_ROOTS_H
