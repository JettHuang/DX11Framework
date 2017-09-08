//***************************************************************************************
// Demo Shader Reflection
//
//***************************************************************************************

#include "Common/D3DUtils.h"
#include "HLSLCompiler/GteHLSLFactory.h"
#include <fstream>

using namespace gte;


#if defined(DEBUG) || defined(_DEBUG)
#pragma comment(lib, "Frameworkd.lib")
#else
#pragma comment(lib, "Framework.lib")
#endif

unsigned int const gCompileFlags =
D3DCOMPILE_ENABLE_STRICTNESS |
D3DCOMPILE_IEEE_STRICTNESS |
D3DCOMPILE_PACK_MATRIX_ROW_MAJOR |
D3DCOMPILE_OPTIMIZATION_LEVEL3;

void ReflectVertexColoring()
{
	HLSLShader vshader = HLSLShaderFactory::CreateFromFile(
		"HLSL/VertexColoring.hlsl",
		"VSMain",
		"vs_5_0",
		ProgramDefines(),
		gCompileFlags);

	if (vshader.IsValid())
	{
		std::ofstream vsout("HLSL/VertexColoring.vsreflect.txt");
		if (vsout)
		{
			vshader.Print(vsout);
			vsout.close();
		}
	}

	HLSLShader pshader = HLSLShaderFactory::CreateFromFile(
		"HLSL/VertexColoring.hlsl",
		"PSMain",
		"ps_5_0",
		ProgramDefines(),
		gCompileFlags);

	if (pshader.IsValid())
	{
		std::ofstream psout("HLSL/VertexColoring.psreflect.txt");
		if (psout)
		{
			pshader.Print(psout);
			psout.close();
		}
	}
}

void ReflectTexturing()
{
	HLSLShader vshader = HLSLShaderFactory::CreateFromFile(
		"HLSL/Texturing.hlsl",
		"VSMain",
		"vs_5_0",
		ProgramDefines(),
		gCompileFlags);

	if (vshader.IsValid())
	{
		std::ofstream vsout("HLSL/Texturing.vsreflect.txt");
		if (vsout)
		{
			vshader.Print(vsout);
			vsout.close();
		}
	}

	HLSLShader pshader = HLSLShaderFactory::CreateFromFile(
		"HLSL/Texturing.hlsl",
		"PSMain",
		"ps_5_0",
		ProgramDefines(),
		gCompileFlags);

	if (pshader.IsValid())
	{
		std::ofstream psout("HLSL/Texturing.psreflect.txt");
		if (psout)
		{
			pshader.Print(psout);
			psout.close();
		}
	}
}

void ReflectBillboards()
{
	HLSLShader vshader = HLSLShaderFactory::CreateFromFile(
		"HLSL/Billboards.hlsl",
		"VSMain",
		"vs_5_0",
		ProgramDefines(),
		gCompileFlags);

	if (vshader.IsValid())
	{
		std::ofstream vsout("HLSL/Billboards.vsreflect.txt");
		if (vsout)
		{
			vshader.Print(vsout);
			vsout.close();
		}
	}

	HLSLShader gshader = HLSLShaderFactory::CreateFromFile(
		"HLSL/Billboards.hlsl",
		"GSMain",
		"gs_5_0",
		ProgramDefines(),
		gCompileFlags);

	if (gshader.IsValid())
	{
		std::ofstream gsout("HLSL/Billboards.gsreflect.txt");
		if (gsout)
		{
			gshader.Print(gsout);
			gsout.close();
		}
	}

	HLSLShader pshader = HLSLShaderFactory::CreateFromFile(
		"HLSL/Billboards.hlsl",
		"PSMain",
		"ps_5_0",
		ProgramDefines(),
		gCompileFlags);

	if (pshader.IsValid())
	{
		std::ofstream psout("HLSL/Billboards.psreflect.txt");
		if (psout)
		{
			pshader.Print(psout);
			psout.close();
		}
	}
}

void ReflectNestedStruct()
{
	HLSLShader cshader = HLSLShaderFactory::CreateFromFile(
		"HLSL/NestedStruct.hlsl",
		"CSMain",
		"cs_5_0",
		ProgramDefines(),
		gCompileFlags);

	if (cshader.IsValid())
	{
		std::ofstream csout("HLSL/NestedStruct.csreflect.txt");
		if (csout)
		{
			cshader.Print(csout);
			csout.close();
		}
	}
}

void ReflectTextureArrays()
{
	HLSLShader vshader = HLSLShaderFactory::CreateFromFile(
		"HLSL/TextureArrays.hlsl",
		"VSMain",
		"vs_5_0",
		ProgramDefines(),
		gCompileFlags);

	if (vshader.IsValid())
	{
		std::ofstream vsout("HLSL/TextureArrays.vsreflect.txt");
		if (vsout)
		{
			vshader.Print(vsout);
			vsout.close();
		}
	}

	HLSLShader pshader = HLSLShaderFactory::CreateFromFile(
		"HLSL/TextureArrays.hlsl",
		"PSMain",
		"ps_5_0",
		ProgramDefines(),
		gCompileFlags);

	if (pshader.IsValid())
	{
		std::ofstream psout("HLSL/TextureArrays.psreflect.txt");
		if (psout)
		{
			pshader.Print(psout);
			psout.close();
		}
	}
}

void ReflectAppendConsume()
{
	HLSLShader cshader = HLSLShaderFactory::CreateFromFile(
		"HLSL/AppendConsume.hlsl",
		"CSMain",
		"cs_5_0",
		ProgramDefines(),
		gCompileFlags);

	if (cshader.IsValid())
	{
		std::ofstream csout("HLSL/AppendConsume.csreflect.txt");
		if (csout)
		{
			cshader.Print(csout);
			csout.close();
		}
	}
}

void ReflectSimpleBuffers()
{
	HLSLShader cshader = HLSLShaderFactory::CreateFromFile(
		"HLSL/SimpleBuffers.hlsl",
		"CSMain",
		"cs_5_0",
		ProgramDefines(),
		gCompileFlags);

	if (cshader.IsValid())
	{
		std::ofstream csout("HLSL/SimpleBuffers.csreflect.txt");
		if (csout)
		{
			cshader.Print(csout);
			csout.close();
		}
	}
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE prevInstance,
	PSTR cmdLine, int showCmd)
{
	// Enable run-time memory check for debug builds.
#if defined(DEBUG) | defined(_DEBUG)
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif

	ReflectVertexColoring();
	ReflectTexturing();
	ReflectBillboards();
	ReflectNestedStruct();
	ReflectTextureArrays();
	ReflectSimpleBuffers();
	ReflectAppendConsume();

	return 0;
}

