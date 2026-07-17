#include "FxEffectDefDumperT6.h"

#include "Dumping/FxFile/FxFileDumper.h"
#include "Fx/FxCommon.h"

using namespace T6;

namespace fx
{
    void DumperT6::DumpAsset(AssetDumpingContext& context, const XAssetInfo<AssetFx::Type>& asset)
    {
        const auto* effectDef = asset.Asset();
        const auto assetFile = context.OpenAssetFile(GetFileNameForAsset(asset.m_name));

        if (!assetFile)
            return;

        FxFileDumper fxFileDumper(*assetFile);
        fxFileDumper.Init(3);

        fxFileDumper.BeginElem();

        fxFileDumper.WriteKeyString("name", effectDef->name);

        fxFileDumper.EndElem();
    }
} // namespace fx
