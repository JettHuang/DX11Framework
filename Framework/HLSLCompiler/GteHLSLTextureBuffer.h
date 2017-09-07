// David Eberly, Geometric Tools, Redmond WA 98052
// Copyright (c) 1998-2016
// Distributed under the Boost Software License, Version 1.0.
// http://www.boost.org/LICENSE_1_0.txt
// http://www.geometrictools.com/License/Boost/LICENSE_1_0.txt
// File Version: 3.0.0 (2016/06/19)

#pragma once

#include "GteHLSLBaseBuffer.h"

namespace gte
{

class HLSLTextureBuffer : public HLSLBaseBuffer
{
public:
    // Construction and destruction.
    virtual ~HLSLTextureBuffer();

    HLSLTextureBuffer(D3D11_SHADER_INPUT_BIND_DESC const& desc,
        unsigned int numBytes, std::vector<Member> const& members);

    HLSLTextureBuffer(D3D11_SHADER_INPUT_BIND_DESC const& desc,
        unsigned int index, unsigned int numBytes,
        std::vector<Member> const& members);
};

}
