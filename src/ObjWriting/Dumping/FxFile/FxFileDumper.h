#pragma once

#include "Dumping/AbstractTextDumper.h"

#include <ostream>

class FxFileDumper : AbstractTextDumper
{
public:
    union Vec3
    {
        struct
        {
            float m_x;
            float m_y;
            float m_z;
        };

        float v[3];

        Vec3(float x, float y, float z);
        explicit Vec3(float v[3]);
    };

private:
    struct
    {
        bool m_in_entity : 1;
        bool m_in_brush : 1;
    } m_flags;

    size_t m_entity_index;
    size_t m_brush_index;

public:
    explicit FxFileDumper(std::ostream& stream);

    void Init(const int version) const;
    void WriteKeyInt(const std::string& key, int value) const;
    void WriteKeyFloat(const std::string& key, float value) const;
    void WriteKeyString(const std::string& key, const std::string& value) const;
    void WriteKeyVec3(const std::string& key, const Vec3& value) const;
    // "base amplitude" pair used by things like occlusionQueryScaleRange / cloudDensityRange
    void WriteKeyFloatRange(const std::string& key, float base, float amplitude) const;

    void BeginElem();
    void EndElem();
};
