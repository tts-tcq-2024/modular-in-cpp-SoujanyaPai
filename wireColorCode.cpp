#include "wireColorCode.hpp"

namespace TeleComColorCoder 
{
    const char* majorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
        int numberOfMajorColors = sizeof(majorColorNames) / sizeof(majorColorNames[0]);
    const char* minorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
        int numberOfMinorColors = sizeof(minorColorNames) / sizeof(minorColorNames[0]);

    WireColorPair getColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor = (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return WireColorPair(majorColor, minorColor);
    }

    int getPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }

    std::string WireColorPair::toString() {
        std::string colorPairStr = majorColorNames[majorColor];
        colorPairStr += " ";
        colorPairStr += minorColorNames[minorColor];
        return colorPairStr;
    }
}
