# Intent Recognizer

Application to classify the input message into one of the intent classes
    1. Get Weather
    2. Get Weather City
    3. Check Calendar
    4. Get Fact


Developed by:
    Copyright [2021] <Copyright to Mohamed Imran Peer Mohamed>
    Name:           Mohamed Imran Peer Mohamed
    Email:          mrmdimran95@gmail.com
    C++ Standard:   17
 
To build the app:

    1. Pull the repository.
    2. Create a build directory (mkdir build).
    3. Move to the new build directory (cd build).
    4. Build the configuration (cmake ..)
    5. Build the App (make)
    6. To run the app (./Intent_Identifier).
    
To Test the app:

    Requirements Google Test: 
        Modify the CMakelists.txt in test folder to include the google test library.
    
    1. Goto test/ directory (cd test).
    2. Create a build directory (mkdir build).
    3. Move to the new build directory (cd build).
    4. Build the configuration (cmake ..)
    5. Build the App (make)
    6. Make Test (make test).
    7. To run the tester app (./Intent_Identifier_Tester).
