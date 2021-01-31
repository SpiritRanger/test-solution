#include <iostream>
#include <ctime>
#include <chrono>
#include <string>
#include <fstream>

class Logger {
public:

    void For(std::ostream& out, std::string className, std::string comment) {

        auto timenow = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
        std::string currentTime = ctime(&timenow);
        currentTime.pop_back();

        out << currentTime << ": " << className << " " << comment << "\n";
    }

    void For(std::string className, std::string comment) {
        For(std::cout, className, comment);
    }

private:
};