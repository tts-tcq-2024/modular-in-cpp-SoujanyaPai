#include "wireColorCode.hpp"

namespace TeleComColorCoder 
{
  std::string formatColorPairsForMajorColor(MajorColor major) {
        std::string formattedPairs;
        for (int minor = 0; minor < numberOfMinorColors; ++minor) {
            WireColorPair colorPair = getColorFromPairNumber(
              static_cast<int>(major) * numberOfMinorColors + minor + 1);
            formattedPairs += 
              colorPair.toString() + " - " + std::to_string(getPairNumberFromColor(
                colorPair.getMajorColor(), colorPair.getMinorColor())) + "\n";
        }
        return formattedPairs;
    }

    std::string formatColorCodingReferenceManual() {
        std::string referenceManual;
        for (int major = 0; major < numberOfMajorColors; ++major) {
            referenceManual += formatColorPairsForMajorColor(
              static_cast<MajorColor>(major));
        }
        return referenceManual;
    }
}
