// Copyright 2021 Lukyanchenko Ivan

#include <gtest/gtest.h>
#include "include/number_to_word.h"


TEST(number_to_word, test_constructor) {
    ASSERT_NO_THROW(num_to_word n(19813));
}

TEST(number_to_word, test_get) {
    num_to_word n(1);
    std::string res = n.get_word();
    ASSERT_EQ(res,"");
}

TEST(number_to_word, test_ten) {
    num_to_word n(13);
    n.num2word();
    std::string res = n.get_word();
    ASSERT_EQ(res, res);
}

TEST(number_to_word, test_hundred) {
    num_to_word n(811);
    n.num2word();
    std::string res = n.get_word();
    ASSERT_EQ(res,"eight hundred eleven");
}

TEST(number_to_word, first_thousand) {
    num_to_word n(20232);
    n.num2word();
    std::string res = n.get_word();
    ASSERT_EQ(res,"twenty  thousand two hundred thirty two");
}
