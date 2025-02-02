// Copyright (C) 2019-2020 Zilliz. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance
// with the License. You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software distributed under the License
// is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express
// or implied. See the License for the specific language governing permissions and limitations under the License

#pragma once

#include "knowhere/index/vector_index/VecIndex.h"

namespace knowhere::cloner {

extern VecIndexPtr
CopyCpuToGpu(const VecIndexPtr& index, const int64_t device_id, const Config& config);

extern VecIndexPtr
CopyGpuToCpu(const VecIndexPtr& index, const Config& config);

}  // namespace knowhere::cloner
