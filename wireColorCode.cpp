#include "wireColorCode.hpp"

namespace TeleComColorCoder 
{
    const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
        int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
    const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
        int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

    WireColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor = (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }

    std::string WireColorPair::ToString() {
        std::string colorPairStr = MajorColorNames[majorColor];
        colorPairStr += " ";
        colorPairStr += MinorColorNames[minorColor];
        return colorPairStr;
    }
}
