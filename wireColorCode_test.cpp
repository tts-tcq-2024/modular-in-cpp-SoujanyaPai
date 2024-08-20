#include "wireColorCode.hpp"

void testPairNumberToColorPair(int pairNumber,
    TeleComColorCoder::MajorColor expectedMajorColor,
    TeleComColorCoder::MinorColor expectedMinorColor)
{
    TeleComColorCoder::WireColorPair colorPair =
        TeleComColorCoder::getColorFromPairNumber(pairNumber);
    std::cout << "Color pair is " << colorPair.toString() << std::endl;
    assert(colorPair.getMajorColor() == expectedMajorColor);
    assert(colorPair.getMinorColor() == expectedMinorColor);
}

void testColorPairToPairNumber(
    TeleComColorCoder::MajorColor majorColor,
    TeleComColorCoder::MinorColor minorColor,
    int expectedPairNumber)
{
    int pairNumber = TeleComColorCoder::getPairNumberFromColor(
        majorColor, minorColor);
    std::cout << "Pair number is " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}

int main() {
    testPairNumberToColorPair(4, TeleComColorCoder::WHITE, TeleComColorCoder::BROWN);
    testPairNumberToColorPair(5, TeleComColorCoder::WHITE, TeleComColorCoder::SLATE);

    testColorPairToPairNumber(TeleComColorCoder::BLACK, TeleComColorCoder::ORANGE, 12);
    testColorPairToPairNumber(TeleComColorCoder::VIOLET, TeleComColorCoder::SLATE, 25);

    return 0;
}
