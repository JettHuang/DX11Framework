// David Eberly, Geometric Tools, Redmond WA 98052
// Copyright (c) 1998-2016
// Distributed under the Boost Software License, Version 1.0.
// http://www.boost.org/LICENSE_1_0.txt
// http://www.geometrictools.com/License/Boost/LICENSE_1_0.txt
// File Version: 3.0.0 (2016/06/19)

#pragma once

#include "GteHLSLResource.h"

namespace gte
{

class HLSLTextureArray : public HLSLResource
{
public:
    // Construction and destruction.
    virtual ~HLSLTextureArray();

    HLSLTextureArray(D3D11_SHADER_INPUT_BIND_DESC const& desc);

    HLSLTextureArray(D3D11_SHADER_INPUT_BIND_DESC const& desc,
        unsigned int index);

    // Member access.
    unsigned int GetNumComponents() const;
    unsigned int GetNumDimensions() const;
    bool IsGpuWritable() const;

private:
    void Initialize(D3D11_SHADER_INPUT_BIND_DESC const& desc);

    unsigned int mNumComponents;
    unsigned int mNumDimensions;
    bool mGpuWritable;
};

}
