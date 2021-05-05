/**
  *  Copyright [2021] <Copyright to Mohamed Imran Peer Mohamed>
  *  Name:           Mohamed Imran Peer Mohamed
  *  Email:          mrmdimran95@gmail.com
  *  Description:    Test Intent Recognizer Application using google test
  *  C++ Standard:   17
  **/
#include <gtest/gtest.h>
#include <intent_recognizer.h>

TEST(Intent_Recognizer_Tester, Get_Weather) {
    intent_recognizer* handle = new intent_recognizer();
    ASSERT_EQ("Get Weather",
        handle->identifyIntent("What is the weather like today?"));
    delete handle;
}

TEST(Intent_Recognizer_Tester, Get_Weather_City) {
    intent_recognizer* handle = new intent_recognizer();
    ASSERT_EQ("Get Weather City",
        handle->identifyIntent("What is the weather like in Paris today?"));
    ASSERT_EQ("Get Weather City",
        handle->identifyIntent("What is the weather like in New York today?"));
    ASSERT_EQ("Get Weather City",
        handle->identifyIntent("Will it rain tomorrow in Paris?"));
    delete handle;
}

TEST(Intent_Recognizer_Tester, Check_Calendar) {
    intent_recognizer* handle = new intent_recognizer();
    ASSERT_EQ("Check Calendar",
        handle->identifyIntent("Am I free at 13:00 PM tomorrow?"));
    ASSERT_EQ("Check Calendar",
        handle->identifyIntent("Do I have an appointment at 13:00pm tomorrow?"));
    delete handle;
}

TEST(Intent_Recognizer_Tester, Get_Fact) {
    intent_recognizer* handle = new intent_recognizer();
    ASSERT_EQ("Get Fact",
        handle->identifyIntent("Tell me an interesting fact."));
    delete handle;
}
