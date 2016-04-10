/**
 * VKTS - VulKan ToolS.
 *
 * The MIT License (MIT)
 *
 * Copyright (c) since 2014 Norbert Nopper
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "BSDFMaterial.hpp"

namespace vkts
{

BSDFMaterial::BSDFMaterial() :
    IBSDFMaterial(), name()
{
}

BSDFMaterial::BSDFMaterial(const BSDFMaterial& other) :
    IBSDFMaterial(), name(other.name)
{
}

BSDFMaterial::~BSDFMaterial()
{
    destroy();
}

//
// IBSDFMaterial
//

const std::string& BSDFMaterial::getName() const
{
    return name;
}

void BSDFMaterial::setName(const std::string& name)
{
    this->name = name;
}

IShaderModuleSP BSDFMaterial::getFragmentShader() const
{
	return fragmentShader;
}

void BSDFMaterial::setFragmentShader(const IShaderModuleSP& fragmentShader)
{
	this->fragmentShader = fragmentShader;
}

void BSDFMaterial::addTexture(const ITextureSP& texture)
{
    allTextures.append(texture);
}

VkBool32 BSDFMaterial::removeTexture(const ITextureSP& texture)
{
    return allTextures.remove(texture);
}

size_t BSDFMaterial::getNumberTextures() const
{
    return allTextures.size();
}

const SmartPointerVector<ITextureSP>& BSDFMaterial::getTextures() const
{
    return allTextures;
}

//
// ICloneable
//

IBSDFMaterialSP BSDFMaterial::clone() const
{
    return IBSDFMaterialSP(new BSDFMaterial(*this));
}

//
// IDestroyable
//

void BSDFMaterial::destroy()
{
}

} /* namespace vkts */
