/**
  *  Copyright [2021] <Copyright to Mohamed Imran Peer Mohamed>
  *  Name:           Mohamed Imran Peer Mohamed
  *  Email:          mrmdimran95@gmail.com
  *  Description:    Get Weather City Class
  *  C++ Standard:   17
  **/
#ifndef GET_WEATHER_CITY_H__
#define GET_WEATHER_CITY_H__

#include <base.h>

class get_weather_city: public base {
 public:
    get_weather_city() {
        insertPattern();
    }

    // Pattern to validate
    void insertPattern(void) {
        /*
            Checks for pattern containing keywords like rain, summer, or weather in the middle along with in keyword and ending with [?].
        */
        pattern.push_back("[[:alpha:][:space:]]+(weather)[[:alpha:][:space:]]* [in]+ [[:alpha:][:space:]]+[?]");
        pattern.push_back("[[:alpha:][:space:]]+(rain)[[:alpha:][:space:]]* [in]+ [[:alpha:][:space:]]+[?]");
        pattern.push_back("[[:alpha:][:space:]]+(summer)[[:alpha:][:space:]]* [in]+ [[:alpha:][:space:]]+[?]");
    }

    // Validating the string is matches the pattern
    INTENTS validate(const std::string question) {
        for (auto& i : pattern) {
            if (std::regex_match(question, std::regex(i)))
                return GET_WEATHER_CITY;
        }

        return NONE;
    }
};

#endif      // GET_WEATHER_CITY_H__
