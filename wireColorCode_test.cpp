#include "wireColorCode.hpp"

void testNumberToPair(int pairNumber,
    TeleComColorCoder::MajorColor expectedMajor,
    TeleComColorCoder::MinorColor expectedMinor)
{
    TeleComColorCoder::ColorPair colorPair =
        TeleComColorCoder::GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

void testPairToNumber(
    TeleComColorCoder::MajorColor major,
    TeleComColorCoder::MinorColor minor,
    int expectedPairNumber)
{
    int pairNumber = TeleComColorCoder::GetPairNumberFromColor(major, minor);
    std::cout << "Pair number is" << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}

int main() {
    testNumberToPair(4, TeleComColorCoder::WHITE, TeleComColorCoder::BROWN);
    testNumberToPair(5, TeleComColorCoder::WHITE, TeleComColorCoder::SLATE);

    testPairToNumber(TeleComColorCoder::BLACK, TeleComColorCoder::ORANGE, 12);
    testPairToNumber(TeleComColorCoder::VIOLET, TeleComColorCoder::SLATE, 25);

    return 0;
}
