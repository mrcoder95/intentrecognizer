/**
  *  Copyright [2021] <Copyright to Mohamed Imran Peer Mohamed>
  *  Name:           Mohamed Imran Peer Mohamed
  *  Email:          mrmdimran95@gmail.com
  *  Description:    Base Class to define the methods of each intent class.
  *  C++ Standard:   17
  **/
#ifndef BASE_H__
#define BASE_H__

#include <vector>
#include <regex>
#include <string>

enum INTENTS {
    GET_WEATHER = 0,
    GET_WEATHER_CITY = 1,
    CHECK_CALENDAR = 2,
    GET_FACT = 3,
    NONE = 4
};

class INTENTSNAME {
 public:
    static std::string getIntent(const INTENTS intent) {
        switch (intent) {
            case GET_WEATHER:       return "Get Weather";
                                    break;
            case GET_WEATHER_CITY:  return "Get Weather City";
                                    break;
            case CHECK_CALENDAR:    return "Check Calendar";
                                    break;
            case GET_FACT:          return "Get Fact";
                                    break;
            default:                return "None";
                                    break;
        }
    }
};

class base {
 protected:
    std::vector <std::string> pattern;
 public:
    virtual INTENTS validate(const std::string) = 0;
    virtual void insertPattern(void) = 0;
};

#endif      // BASE_H__
