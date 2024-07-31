#ifndef WIRECOLORCODE_HPP
#define WIRECOLORCODE_HPP

#include <iostream>
#include <string>
#include <cassert>

namespace TeleComColorCoder 
{
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

    extern const char* MajorColorNames[];
    extern const char* MinorColorNames[];

class WireColorPair {
        private:
            MajorColor majorColor;
            MinorColor minorColor;
        public:
            WireColorPair(MajorColor major, MinorColor minor):
                majorColor(major), minorColor(minor)
            {}
            MajorColor getMajor() {
                return majorColor;
            }
            MinorColor getMinor() {
                return minorColor;
            }
            std::string ToString();
    };

    WireColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
    std::string formatWireColorCodeManual();
}

#endif //WIRECOLORCODE_HPP
