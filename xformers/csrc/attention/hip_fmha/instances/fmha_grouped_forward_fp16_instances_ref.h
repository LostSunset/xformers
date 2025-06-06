
/*
  Copyright (c) 2024, Advanced Micro Devices, Inc. All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * The file is automatically generated, don't modify!
 * See the generator script
 * `xformers/csrc/attention/hip_fmha/generate_instances.py`
 */

#include <ck_tile/core/numeric/half.hpp>
#include "ck_tiled_fmha_grouped_forward.h"

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    true,
    true,
    true,
    32>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    false,
    true,
    true,
    32>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    true,
    true,
    false,
    32>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    false,
    true,
    false,
    32>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    true,
    false,
    true,
    32>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    false,
    false,
    true,
    32>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    true,
    false,
    false,
    32>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    false,
    false,
    false,
    32>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    true,
    true,
    true,
    64>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    false,
    true,
    true,
    64>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    true,
    true,
    false,
    64>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    false,
    true,
    false,
    64>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    true,
    false,
    true,
    64>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    false,
    false,
    true,
    64>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    true,
    false,
    false,
    64>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    false,
    false,
    false,
    64>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    true,
    true,
    true,
    96>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    false,
    true,
    true,
    96>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    true,
    true,
    false,
    96>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    false,
    true,
    false,
    96>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    true,
    false,
    true,
    96>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    false,
    false,
    true,
    96>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    true,
    false,
    false,
    96>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    false,
    false,
    false,
    96>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    true,
    true,
    true,
    128>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    false,
    true,
    true,
    128>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    true,
    true,
    false,
    128>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    false,
    true,
    false,
    128>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    true,
    false,
    true,
    128>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    false,
    false,
    true,
    128>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    true,
    false,
    false,
    128>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    false,
    false,
    false,
    128>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    true,
    true,
    true,
    256>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    false,
    true,
    true,
    256>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    true,
    true,
    false,
    256>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    false,
    true,
    false,
    256>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    true,
    false,
    true,
    256>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    false,
    false,
    true,
    256>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    true,
    false,
    false,
    256>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    false,
    false,
    false,
    256>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    true,
    true,
    true,
    512>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    false,
    true,
    true,
    512>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    true,
    true,
    false,
    512>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    false,
    true,
    false,
    512>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    true,
    false,
    true,
    512>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    false,
    false,
    true,
    512>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    true,
    false,
    false,
    512>(GroupedForwardParams& param, hipStream_t stream);

extern template void run_grouped_forward_mask_bias_dropout_dispatch<
    ck_tile::fp16_t,
    false,
    false,
    false,
    512>(GroupedForwardParams& param, hipStream_t stream);
