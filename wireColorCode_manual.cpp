#include "wireColorCode.hpp"

namespace TeleComColorCoder 
{
  std::string formatColorPairsForMajorColor(MajorColor major) {
        std::string formattedPairs;
        for (int minor = 0; minor < getNumberOfMinorWireColors(); ++minor) {
            WireColorPair colorPair = getWireColorPairFromNumber(static_cast<int>(major) * getNumberOfMinorWireColors() + minor + 1);
            formattedPairs += formatColorPair(colorPair);
        }
        return formattedPairs;
    }

    std::string formatColorCodingReferenceManual() {
        std::string referenceManual;
        for (int major = 0; major < getNumberOfMajorWireColors(); ++major) {
            referenceManual += formatWireColorCodeManual(static_cast<MajorWireColor>(major));
        }
        return referenceManual;
    }
}
