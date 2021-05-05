/**
  *  Copyright [2021] <Copyright to Mohamed Imran Peer Mohamed>
  *  Name:           Mohamed Imran Peer Mohamed
  *  Email:          mrmdimran95@gmail.com
  *  Description:    Get Fact Class
  *  C++ Standard:   17
  **/
#ifndef GET_FACT_H__
#define GET_FACT_H__

#include <base.h>

class get_fact: public base {
 public:
    get_fact() {
        insertPattern();
    }

    // Pattern to validate
    void insertPattern(void) {
        pattern.push_back("[[:alpha:][:space:]]*[fact][[:alpha:][:space:]]*[.]");
    }

    // Validating the string is matches the pattern
    INTENTS validate(const std::string question) {
        for (auto& i : pattern) {
            if (std::regex_match(question, std::regex(i)))
                return GET_FACT;
        }

        return NONE;
    }
};

#endif      // GET_FACT_H__
