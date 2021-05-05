/**
  *  Copyright [2021] <Copyright to Mohamed Imran Peer Mohamed>
  *  Name:           Mohamed Imran Peer Mohamed
  *  Email:          mrmdimran95@gmail.com
  *  Description:    Check Calendar Class
  *  C++ Standard:   17
  **/
#ifndef CHECK_CALENDAR_H__
#define CHECK_CALENDAR_H__

#include <base.h>

class check_calendar: public base {
 public:
    check_calendar() {
        insertPattern();
    }

    // Pattern to validate
    void insertPattern(void) {
        /*
            Checks for pattern containing 01:00 am / pm, appointment, or schedule keywords in the middle and ending with [?].
        */
        pattern.push_back("[[:alpha:][:space:]]+[[:digit:]]+[:][[:digit:]]+[am]*[pm]*[[:alpha:][:space:]]*[?]");
        pattern.push_back("[[:alpha:][:space:]]+(appointment)[[:alpha:][:space:]]*[?]");
        pattern.push_back("[[:alpha:][:space:]]+(schedule)[[:alpha:][:space:]]*[?]");
    }

    // Validating the string is matches the pattern
    INTENTS validate(const std::string question) {
        for (auto& i : pattern) {
            if (std::regex_match(question, std::regex(i)))
                return CHECK_CALENDAR;
        }

        return NONE;
    }
};

#endif      // CHECK_CALENDER_H__
