#include <gtest/gtest.h>

extern "C" {
#include "greeter.h"
#include "autoconf.h"
}

#if defined(CONFIG_LANG_DE) && CONFIG_LANG_DE == 1
const char* greeting = "Hallo, Welt!";
#else
const char* greeting = "Hello, world!";
#endif
// Testing the greeting function
TEST(GreeterTest, Cocos) {
    EXPECT_STREQ(greeting, get_greeting());
}
