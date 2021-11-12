#pragma once

// ${generated_comment}

#include <ATen/core/Tensor.h>
#include <ATen/TensorMeta.h>
#include <ATen/TensorIterator.h>

namespace at {

namespace meta {

struct TORCH_API structured_add_Tensor : public TensorIteratorBase {
    
    
    void meta(const at::Tensor & self, const at::Tensor & other, const at::Scalar & alpha);
};

${declarations}

} // namespace meta
} // namespace at
