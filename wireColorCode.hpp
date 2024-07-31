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
            std::string toString();
    };

    WireColorPair getColorFromPairNumber(int pairNumber);
    int getPairNumberFromColor(MajorColor major, MinorColor minor);
    MajorColor getMajorWireColor() const;
    MinorColor getMinorWireColor() const;
    std::string formatColorPairsForMajorColor(MajorColor major);
    std::string formatWireColorCodeManual();
}

#endif //WIRECOLORCODE_HPP
