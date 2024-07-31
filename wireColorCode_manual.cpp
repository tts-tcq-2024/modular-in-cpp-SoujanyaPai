#include "wireColorCode.hpp"

namespace TeleComColorCoder 
{
  MajorColor getMajorWireColor() const {
        return majorWireColor;
    }

  MinorColor getMinorWireColor() const {
        return minorWireColor;
    }

  std::string formatColorPairsForMajorColor(MajorColor major) {
        std::string formattedPairs;
        for (int minor = 0; minor < numberOfMinorColors; ++minor) {
            WireColorPair colorPair = getColorFromPairNumber(static_cast<int>(major) * numberOfMinorColors + minor + 1);
            formattedPairs += colorPair.toString() + " - " + std::to_string(getPairNumberFromColor(colorPair.getMajorWireColor(), colorPair.getMinorWireColor())) + "\n";
        }
        return formattedPairs;
    }

    std::string formatColorCodingReferenceManual() {
        std::string referenceManual;
        for (int major = 0; major < numberOfMajorColors; ++major) {
            referenceManual += formatWireColorCodeManual(static_cast<MajorWireColor>(major));
        }
        return referenceManual;
    }
}
