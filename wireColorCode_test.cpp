#include "wireColorCode.hpp"

void testNumberToPair(int pairNumber,
    TeleComColorCoder::MajorColor expectedMajor,
    TeleComColorCoder::MinorColor expectedMinor)
{
    TeleComColorCoder::WireColorPair colorPair =
        TeleComColorCoder::getColorFromPairNumber(pairNumber);
    std::cout << "Color pair is " << colorPair.toString() << std::endl;
    assert(colorPair.getMajorColor() == expectedMajor);
    assert(colorPair.getMinorColor() == expectedMinor);
}

void testPairToNumber(
    TeleComColorCoder::MajorColor major,
    TeleComColorCoder::MinorColor minor,
    int expectedPairNumber)
{
    int pairNumber = TeleComColorCoder::getPairNumberFromColor(major, minor);
    std::cout << "Pair number is " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}

int main() {
    testNumberToPair(4, TeleComColorCoder::WHITE, TeleComColorCoder::BROWN);
    testNumberToPair(5, TeleComColorCoder::WHITE, TeleComColorCoder::SLATE);

    testPairToNumber(TeleComColorCoder::BLACK, TeleComColorCoder::ORANGE, 12);
    testPairToNumber(TeleComColorCoder::VIOLET, TeleComColorCoder::SLATE, 25);

    return 0;
}
