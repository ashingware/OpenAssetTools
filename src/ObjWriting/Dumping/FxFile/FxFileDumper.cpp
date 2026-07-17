#include "FxFileDumper.h"

#include <cassert>
#include <iomanip>

FxFileDumper::Vec3::Vec3(const float x, const float y, const float z)
    : v{}
{
    m_x = x;
    m_y = y;
    m_z = z;
}

FxFileDumper::Vec3::Vec3(float v[3])
    : v{v[0], v[1], v[2]}
{
}

FxFileDumper::FxFileDumper(std::ostream& stream)
    : AbstractTextDumper(stream),
      m_flags{},
      m_entity_index(0u),
      m_brush_index(0u)
{
}

void FxFileDumper::Init(const int version) const
{
    m_stream << "iwfx " << version << "\n\n";
}

void FxFileDumper::WriteKeyInt(const std::string& key, const int value) const
{
    Indent();
    m_stream << key << " " << value << ";\n";
}

void FxFileDumper::WriteKeyFloat(const std::string& key, const float value) const
{
    Indent();
    m_stream << key << " " << std::setprecision(9) << value << ";\n";
}

void FxFileDumper::WriteKeyString(const std::string& key, const std::string& value) const
{
    Indent();
    m_stream << key << " \"" << value << "\";\n";
}

void FxFileDumper::WriteKeyVec3(const std::string& key, const Vec3& value) const
{
    Indent();
    m_stream << key << " " << std::setprecision(9) << value.m_x << " " << value.m_y << " " << value.m_z << ";\n";
}

void FxFileDumper::WriteKeyFloatRange(const std::string& key, const float base, const float amplitude) const
{
    Indent();
    m_stream << key << " " << std::setprecision(9) << base << " " << amplitude << ";\n";
}

void FxFileDumper::BeginElem()
{
    Indent();
    m_stream << "{\n";
    IncIndent();
}

void FxFileDumper::EndElem()
{
    DecIndent();
    Indent();
    m_stream << "}\n";
}
