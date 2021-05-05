/**
  *  Copyright [2021] <Copyright to Mohamed Imran Peer Mohamed>
  *  Name:           Mohamed Imran Peer Mohamed
  *  Email:          mrmdimran95@gmail.com
  *  Description:    Intent Recognizer Class
  *  C++ Standard:   17
  **/
#ifndef INTENT_RECOGNIZER_H__
#define INTENT_RECOGNIZER_H__

#include <get_weather.h>
#include <get_weather_city.h>
#include <get_fact.h>
#include <check_calendar.h>

#include <vector>
#include <regex>

class intent_recognizer {
 private:
    std::vector <base *> obj;

    // Initialization of each intent classes
    void initializeObjects(void) {
        deinitializeObjects();

        obj.push_back(new get_weather_city());
        obj.push_back(new get_weather());
        obj.push_back(new check_calendar());
        obj.push_back(new get_fact());
    }

    // Deinitialization of intent classes
    void deinitializeObjects(void) {
        for (auto& i : obj) {
            delete i;
        }
    }

 public:
    intent_recognizer() {
        initializeObjects();
    }

    std::string identifyIntent(const std::string str) {
        // Trim Leading White Space if available
        std::string msg = std::regex_replace(str, std::regex("^ +"), "");

        // Trim Trailing White Space if available
        msg = std::regex_replace(msg, std::regex(" +$"), "");

        // Identifying the intent of the message
        for (auto& i : obj) {
            INTENTS intent = i->validate(msg);
            if (intent != NONE)
                return INTENTSNAME::getIntent(intent);
        }
        return INTENTSNAME::getIntent(NONE);
    }

    ~intent_recognizer() {
        deinitializeObjects();
    }
};

#endif      // INTENT_RECOGNIZER_H__
