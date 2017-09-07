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

class HLSLSamplerState : public HLSLResource
{
public:
    // Construction and destruction.
    virtual ~HLSLSamplerState();

    HLSLSamplerState(D3D11_SHADER_INPUT_BIND_DESC const& desc);

    HLSLSamplerState(D3D11_SHADER_INPUT_BIND_DESC const& desc,
        unsigned int index);
};

}
