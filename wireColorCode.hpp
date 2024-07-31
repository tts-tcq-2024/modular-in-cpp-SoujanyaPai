#ifndef WIRECOLORCODE_HPP
#define WIRECOLORCODE_HPP

#include <iostream>
#include <string>
#include <cassert>

namespace TeleComColorCoder 
{
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

    extern const char* majorColorNames[];
    extern const char* minorColorNames[];
    extern int numberOfMajorColors;
    extern int numberOfMinorColors;

class WireColorPair {
        private:
            MajorColor majorColor;
            MinorColor minorColor;
        public:
            WireColorPair(MajorColor major, MinorColor minor):
                majorColor(major), minorColor(minor)
            {}
            MajorColor getMajorColor() {
                return majorColor;
            }
            MinorColor getMinorColor() {
                return minorColor;
            }
            std::string toString();
    };

    WireColorPair getColorFromPairNumber(int pairNumber);
    int getPairNumberFromColor(MajorColor major, MinorColor minor);
    std::string formatColorPairsForMajorColor(MajorColor major);
    std::string formatWireColorCodeManual();
}

#endif //WIRECOLORCODE_HPP
