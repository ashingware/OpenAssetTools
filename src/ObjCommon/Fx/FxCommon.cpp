#include "FxCommon.h"

#include <format>

namespace fx
{
    std::string GetFileNameForAsset(const std::string& assetName)
    {
        return std::format("fx/{}.efx", assetName);
    }
} // namespace fx
