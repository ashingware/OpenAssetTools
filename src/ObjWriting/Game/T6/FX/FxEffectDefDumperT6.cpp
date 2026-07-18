#include "FxEffectDefDumperT6.h"

#include "Dumping/FxFile/FxFileDumper.h"
#include "Fx/FxCommon.h"

using namespace T6;

namespace fx
{
    void DumperT6::DumpAsset(AssetDumpingContext& context, const XAssetInfo<AssetFx::Type>& asset)
    {
        const auto* fxDef = asset.Asset();
        const auto assetFile = context.OpenAssetFile(GetFileNameForAsset(asset.m_name));

        if (!assetFile)
            return;

        const int iwfx_version = 3; // TODO: Move this into ObjConstantsT6.h

        FxFileDumper fxFileDumper(*assetFile);
        fxFileDumper.Init(iwfx_version);

        fxFileDumper.BeginElem();

        auto* elemDef = fxDef->elemDefs;

        fxFileDumper.WriteKeyString("name", fxDef->name);
        fxFileDumper.WriteKeyInt("editorFlags", elemDef->flags);
        fxFileDumper.WriteKeyInt("flags", elemDef->flags);
        fxFileDumper.WriteKeyString("spawnRange", fxDef->name);
        fxFileDumper.WriteKeyString("fadeInRange", fxDef->name);
        fxFileDumper.WriteKeyString("fadeOutRange", fxDef->name);
        fxFileDumper.WriteKeyString("spawnFrustumCullRadius", fxDef->name);
        fxFileDumper.WriteKeyString("spawnLooping", fxDef->name);
        fxFileDumper.WriteKeyString("spawnOneShot", fxDef->name);
        fxFileDumper.WriteKeyString("spawnDelayMsec", fxDef->name);
        fxFileDumper.WriteKeyString("lifeSpanMsec", fxDef->name);
        fxFileDumper.WriteKeyString("spawnOrgX", fxDef->name);
        fxFileDumper.WriteKeyString("spawnOrgY", fxDef->name);
        fxFileDumper.WriteKeyString("spawnOrgz", fxDef->name);
        fxFileDumper.WriteKeyString("spawnOffsetRadius", fxDef->name);
        fxFileDumper.WriteKeyString("spawnOffsetHeight", fxDef->name);
        fxFileDumper.WriteKeyString("spawnAnglePitch", fxDef->name);
        fxFileDumper.WriteKeyString("spawnAngleYaw", fxDef->name);
        fxFileDumper.WriteKeyString("spawnAngleRoll", fxDef->name);
        fxFileDumper.WriteKeyString("angleVelPitch", fxDef->name);
        fxFileDumper.WriteKeyString("angleVelYaw", fxDef->name);
        fxFileDumper.WriteKeyString("angleVelRoll", fxDef->name);
        fxFileDumper.WriteKeyString("initialRot", fxDef->name);
        fxFileDumper.WriteKeyString("rotationAxis", fxDef->name);
        fxFileDumper.WriteKeyString("gravity", fxDef->name);
        fxFileDumper.WriteKeyString("elasticity", fxDef->name);
        fxFileDumper.WriteKeyString("windinfluence", fxDef->name);
        fxFileDumper.WriteKeyString("atlasBehavior", fxDef->name);
        fxFileDumper.WriteKeyString("atlasIndex", fxDef->name);
        fxFileDumper.WriteKeyString("atlasFps", fxDef->name);
        fxFileDumper.WriteKeyString("atlasLoopCount", fxDef->name);
        fxFileDumper.WriteKeyString("atlasColIndexBits", fxDef->name);
        fxFileDumper.WriteKeyString("atlasRowIndexBits", fxDef->name);
        fxFileDumper.WriteKeyString("atlasEntryCount", fxDef->name);
        fxFileDumper.WriteKeyString("atlasIndexRange", fxDef->name);
        fxFileDumper.WriteKeyString("velGraph0X", fxDef->name);
        fxFileDumper.WriteKeyString("velGraph0Y", fxDef->name);
        fxFileDumper.WriteKeyString("velGraph0Z", fxDef->name);
        fxFileDumper.WriteKeyString("velGraph1X", fxDef->name);
        fxFileDumper.WriteKeyString("velGraph1Y", fxDef->name);
        fxFileDumper.WriteKeyString("velGraph1Z", fxDef->name);
        fxFileDumper.WriteKeyString("rotGraph", fxDef->name);
        fxFileDumper.WriteKeyString("sizeGraph0", fxDef->name);
        fxFileDumper.WriteKeyString("sizeGraph1", fxDef->name);
        fxFileDumper.WriteKeyString("scaleGraph", fxDef->name);
        fxFileDumper.WriteKeyString("colorGraph", fxDef->name);
        fxFileDumper.WriteKeyString("alphaGraph", fxDef->name);
        fxFileDumper.WriteKeyString("lightingFrac", fxDef->name);
        fxFileDumper.WriteKeyString("collOffset", fxDef->name);
        fxFileDumper.WriteKeyString("collRadius", fxDef->name);
        fxFileDumper.WriteKeyString("fxOnImpact", fxDef->name);
        fxFileDumper.WriteKeyString("fxOnDeath", fxDef->name);
        fxFileDumper.WriteKeyString("sortOrder", fxDef->name);
        fxFileDumper.WriteKeyString("efPriority", fxDef->name);
        fxFileDumper.WriteKeyString("emission", fxDef->name);
        fxFileDumper.WriteKeyString("emitDist", fxDef->name);
        fxFileDumper.WriteKeyString("emitDistVariance", fxDef->name);
        fxFileDumper.WriteKeyString("attachment", fxDef->name);
        fxFileDumper.WriteKeyString("trailRepeatTime", fxDef->name);
        fxFileDumper.WriteKeyString("trailSplitDist", fxDef->name);
        fxFileDumper.WriteKeyString("trailScrollTime", fxDef->name);
        fxFileDumper.WriteKeyString("trailRepeatDist", fxDef->name);
        fxFileDumper.WriteKeyString("trailDef", fxDef->name);
        fxFileDumper.WriteKeyString("billboardSprite", fxDef->name);
        fxFileDumper.WriteKeyString("orientedSprite", fxDef->name);
        fxFileDumper.WriteKeyString("rotatedSprite", fxDef->name);
        fxFileDumper.WriteKeyString("cloud", fxDef->name);
        fxFileDumper.WriteKeyString("tail", fxDef->name);
        fxFileDumper.WriteKeyString("line", fxDef->name);
        fxFileDumper.WriteKeyString("trail", fxDef->name);
        fxFileDumper.WriteKeyString("decal", fxDef->name);
        fxFileDumper.WriteKeyString("model", fxDef->name);
        fxFileDumper.WriteKeyString("light", fxDef->name);
        fxFileDumper.WriteKeyString("spotLight", fxDef->name);
        fxFileDumper.WriteKeyString("runner", fxDef->name);
        fxFileDumper.WriteKeyString("sound", fxDef->name);
        fxFileDumper.WriteKeyString("alphafadetimemsec", fxDef->name);
        fxFileDumper.WriteKeyString("maxwind_mag", fxDef->name);
        fxFileDumper.WriteKeyString("maxwind_life", fxDef->name);
        fxFileDumper.WriteKeyString("maxwind_interval", fxDef->name);
        fxFileDumper.WriteKeyString("billboardTopWidth", fxDef->name);
        fxFileDumper.WriteKeyString("billboardBottomWidth", fxDef->name);
        fxFileDumper.WriteKeyString("elemSpawnSound", fxDef->name);
        fxFileDumper.WriteKeyString("cloudDensity", fxDef->name);
        fxFileDumper.WriteKeyString("billboardPivot", fxDef->name);
        fxFileDumper.WriteKeyString("spotLightFovInnerFraction", fxDef->name);
        fxFileDumper.WriteKeyString("spotLightStartRadius", fxDef->name);
        fxFileDumper.WriteKeyString("spotLightEndRadius", fxDef->name);

        fxFileDumper.EndElem();
    }
} // namespace fx
