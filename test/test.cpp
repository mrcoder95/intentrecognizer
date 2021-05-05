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
    ASSERT_EQ("Get Weather",
        handle->identifyIntent("How was the weather yesterday?"));
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
    ASSERT_EQ("Get Weather City",
        handle->identifyIntent("Does it rain yesterday in Berlin?"));
    delete handle;
}

TEST(Intent_Recognizer_Tester, Check_Calendar) {
    intent_recognizer* handle = new intent_recognizer();
    ASSERT_EQ("Check Calendar",
        handle->identifyIntent("Am I free at 13:00 PM tomorrow?"));
    ASSERT_EQ("Check Calendar",
        handle->identifyIntent("Do I have an appointment at 20:00pm tomorrow?"));
    ASSERT_EQ("Check Calendar",
        handle->identifyIntent("Shall we schedule an appointment for 18:00 dinner at XYZ resort?"));
    ASSERT_EQ("Check Calendar",
        handle->identifyIntent("Do i have an appointment for tomorrow?"));
    delete handle;
}

TEST(Intent_Recognizer_Tester, Get_Fact) {
    intent_recognizer* handle = new intent_recognizer();
    ASSERT_EQ("Get Fact",
        handle->identifyIntent("Tell me an interesting fact."));
    ASSERT_EQ("Get Fact",
        handle->identifyIntent("It is a fact that COVID second wave is stronger than first wave."));
    delete handle;
}
