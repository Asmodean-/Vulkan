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

#ifndef VKTS_FN_PIPELINE_HPP_
#define VKTS_FN_PIPELINE_HPP_

#include <vkts/vkts.hpp>

namespace vkts
{

/**
 *
 * @ThreadSafe
 */
VKTS_APICALL IPipelineCacheSP VKTS_APIENTRY pipelineCreateCache(const VkDevice device, const VkPipelineCacheCreateFlags flags, const size_t initialSize, const void* initialData);

/**
 *
 * @ThreadSafe
 */
VKTS_APICALL IPipelineLayoutSP VKTS_APIENTRY pipelineCreateLayout(const VkDevice device, const VkPipelineLayoutCreateFlags flags, const uint32_t setLayoutCount, const VkDescriptorSetLayout* setLayouts, const uint32_t pushConstantRangeCount, const VkPushConstantRange* pushConstantRanges);

/**
 *
 * @ThreadSafe
 */
VKTS_APICALL IGraphicsPipelineSP VKTS_APIENTRY pipelineCreateGraphics(const VkDevice device, const VkPipelineCache pipelineCache, const VkGraphicsPipelineCreateInfo& graphicsPipelineCreateInfo, const VkTsVertexBufferType vertexBufferType);

/**
 *
 * @ThreadSafe
 */
VKTS_APICALL IComputePipelineSP VKTS_APIENTRY pipelineCreateCompute(const VkDevice device, const VkPipelineCache pipelineCache, const VkComputePipelineCreateInfo& computePipelineCreateInfo);

}

#endif /* VKTS_FN_PIPELINE_HPP_ */
